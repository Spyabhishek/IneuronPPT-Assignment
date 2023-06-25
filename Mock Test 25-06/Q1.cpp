#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    vector<int> stack;

public:
    void push(int item)
    {
        stack.push_back(item);
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        int item = stack.back();
        stack.pop_back();
        return item;
    }

    bool isEmpty()
    {
        return stack.empty();
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << endl;     // Output: 30
    cout << stack.pop() << endl;     // Output: 20
    cout << stack.isEmpty() << endl; // Output: 0 
    cout << stack.pop() << endl;     // Output: 10
    cout << stack.isEmpty() << endl; // Output: 1 
    cout << stack.pop() << endl;     // Output: -1 

    return 0;
}
