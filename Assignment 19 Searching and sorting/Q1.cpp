#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct Compare
{
    bool operator()(const ListNode *a, const ListNode *b)
    {
        return a->val > b->val;
    }
};

ListNode *mergeKLists(vector<ListNode *> &lists)
{
    priority_queue<ListNode *, vector<ListNode *>, Compare> minHeap;

    for (ListNode *list : lists)
    {
        if (list)
        {
            minHeap.push(list);
        }
    }

    ListNode dummy(0);
    ListNode *curr = &dummy;

    while (!minHeap.empty())
    {
        ListNode *node = minHeap.top();
        minHeap.pop();

        if (node->next)
        {
            minHeap.push(node->next);
        }

        curr->next = node;
        curr = curr->next;
    }

    return dummy.next;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Example input
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(5);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode *l3 = new ListNode(2);
    l3->next = new ListNode(6);

    vector<ListNode *> lists = {l1, l2, l3};

    ListNode *merged = mergeKLists(lists);
    printList(merged);

    return 0;
}
