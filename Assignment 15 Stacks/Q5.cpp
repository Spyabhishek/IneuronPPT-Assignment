#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(const string &str)
{
    stack<char> st;

    // Push each character onto the stack
    for (char ch : str)
    {
        st.push(ch);
    }

    string reversedStr;

    // Pop each character from the stack and append it to the reversed string
    while (!st.empty())
    {
        reversedStr += st.top();
        st.pop();
    }

    return reversedStr;
}

int main()
{
    string str = "GeeksforGeeks";

    string reversedStr = reverseString(str);

    cout << "Reversed String: " << reversedStr << endl;

    return 0;
}
