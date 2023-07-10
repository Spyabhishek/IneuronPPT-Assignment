#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n, -1); // Initialize the result vector with -1

    stack<int> st; // Create an empty stack to store the indices of elements

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // Pop elements from the stack while they are smaller than or equal to the current element
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        // If the stack is not empty, the top element is the next greater element
        if (!st.empty())
        {
            result[i] = arr[st.top()];
        }

        // Push the current element's index into the stack
        st.push(i);
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = nextGreaterElement(arr);

    cout << "Next greater elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
