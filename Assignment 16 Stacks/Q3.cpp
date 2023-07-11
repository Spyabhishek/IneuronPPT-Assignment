#include <iostream>
#include <stack>
using namespace std;


void deleteMiddleElement(stack<int> &st, int k)
{
    // Base case: If the stack is empty or the middle element is reached, remove the element
    if (st.empty() || k == 0)
    {
        st.pop();
        return;
    }

    // Remove the top element and recursively call deleteMiddleElement
    int temp = st.top();
    st.pop();

    // Decrement the middle element count
    deleteMiddleElement(st, k - 1);

    // Push the removed element back if it's not the middle element
    st.push(temp);
}

void deleteMiddle(stack<int> &st)
{
    // Get the size of the stack
    int size = st.size();

    // Find the middle element index
    int middle = size / 2;

    // Delete the middle element
    deleteMiddleElement(st, middle);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    deleteMiddle(st);

    cout << "Stack after deleting middle element: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
