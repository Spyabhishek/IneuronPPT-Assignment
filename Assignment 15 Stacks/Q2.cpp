#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerOnLeft(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n, -1); // Initialize 

    stack<int> st; // Create an empty stack 

    // Traverse the array from left to right
    for (int i = 0; i < n; i++)
    {
        // Pop elements from the stack until a smaller element is found or the stack becomes empty
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        // If the stack is not empty, the top element is the nearest smaller element on the left side
        if (!st.empty())
        {
            result[i] = st.top();
        }

        // Push the current element's index into the stack
        st.push(arr[i]);
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

    vector<int> result = nearestSmallerOnLeft(arr);

    cout << "Nearest smaller elements on the left side are: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
