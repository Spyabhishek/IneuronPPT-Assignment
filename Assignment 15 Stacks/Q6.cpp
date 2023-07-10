#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePostfix(const string &postfix)
{
    stack<int> st;

    // Iterate through each character in the postfix expression
    for (char ch : postfix)
    {
        // If the character is a digit, convert it to an integer and push it onto the stack
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            // If the character is an operator, pop the top two elements from the stack
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();

            // Perform the operation based on the operator and push the result onto the stack
            switch (ch)
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            }
        }
    }

    // The final result will be the only element remaining on the stack
    return st.top();
}

int main()
{
    string postfix = "231*+9-";

    int result = evaluatePostfix(postfix);

    cout << "Result: " << result << endl;

    return 0;
}
