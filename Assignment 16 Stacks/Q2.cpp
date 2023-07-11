#include <iostream>
#include <stack>
using namespace std;

void sortStack(stack<int> &st)
{
    stack<int> tempStack;

    while (!st.empty())
    {
        int temp = st.top();
        st.pop();

        while (!tempStack.empty() && tempStack.top() > temp)
        {
            st.push(tempStack.top());
            tempStack.pop();
        }

        tempStack.push(temp);
    }

    while (!tempStack.empty())
    {
        st.push(tempStack.top());
        tempStack.pop();
    }
}

int main()
{
    stack<int> st;

    // Input elements into the stack
    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);
    st.push(23);

    sortStack(st);

    cout << "Sorted Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
