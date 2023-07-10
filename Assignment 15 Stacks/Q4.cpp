#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(topElement);
}

void reverseStack(stack<int> &st)
{
    if (st.empty() || st.size() == 1)
    {
        return;
    }

    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topElement);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(7);
    st.push(6);

    reverseStack(st);

    cout << "Reversed Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
