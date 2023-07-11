#include <iostream>
#include <stack>
using namespace std;

int reverseNumber(int num)
{
    stack<int> st;

    // Extract each digit and push it onto the stack
    while (num != 0)
    {
        int digit = num % 10;
        st.push(digit);
        num /= 10;
    }

    int reversedNum = 0;
    int placeValue = 1;

    // Pop each digit from the stack and construct the reversed number
    while (!st.empty())
    {
        int digit = st.top();
        st.pop();
        reversedNum += digit * placeValue;
        placeValue *= 10;
    }

    return reversedNum;
}

int main()
{
    int num = 6899;

    int reversedNum = reverseNumber(num);

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
