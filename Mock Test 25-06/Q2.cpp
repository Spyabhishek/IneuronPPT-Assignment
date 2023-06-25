#include <iostream>
#include <vector>
using namespace std;

class Queue
{
private:
    vector<int> queue;

public:
    void enqueue(int item)
    {
        queue.push_back(item);
    }

    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        int item = queue.front();
        queue.erase(queue.begin());
        return item;
    }

    bool isEmpty()
    {
        return queue.empty();
    }
};

int main()
{
    Queue queue;
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);

    cout << queue.dequeue() << endl; // Output: 100
    cout << queue.dequeue() << endl; // Output: 200
    cout << queue.isEmpty() << endl; // Output: 0 (false)
    cout << queue.dequeue() << endl; // Output: 300
    cout << queue.isEmpty() << endl; // Output: 1 (true)
    cout << queue.dequeue() << endl; // Output: -1

    return 0;
}
