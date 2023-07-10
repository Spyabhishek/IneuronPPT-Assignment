#include <iostream>
#include <queue>
using namespace std;

class Stack
{
private:
    queue<int> q1, q2;

public:
    void push(int value)
    {
        // Add the new element to q1
        q1.push(value);
    }

    void pop()
    {
        // Move all elements except the last one from q1 to q2
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        // Remove the last element from q1
        q1.pop();

        // Swap the names of q1 and q2
        swap(q1, q2);
    }

    int top()
    {
        // Move all elements from q1 to q2 except the last one
        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        // Get the last element from q1
        int topElement = q1.front();

        // Move the last element from q1 to q2
        q2.push(topElement);
        q1.pop();

        // Swap the names of q1 and q2
        swap(q1, q2);

        return topElement;
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    Stack stack;

    stack.push(2);
    stack.push(3);
    cout << stack.top() << " "; // Output: 3
    stack.pop();
    stack.push(4);
    cout << stack.top() << " "; // Output: 4
    stack.pop();

    return 0;
}
