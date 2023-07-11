#include <bits/stdc++.h>
using namespace std;

int maxAbsDifference(const std::vector<int> &arr)
{
    int n = arr.size();

    // Arrays to store the nearest smaller elements on the left and right side of each element
    std::vector<int> leftSmaller(n, 0);
    std::vector<int> rightSmaller(n, 0);

    std::stack<int> st; // Stack to store the indices of elements

    // Find the nearest smaller element on the left side for each element
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            leftSmaller[i] = arr[st.top()];
        }

        st.push(i);
    }

    // Clear the stack
    while (!st.empty())
    {
        st.pop();
    }

    // Find the nearest smaller element on the right side for each element
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            rightSmaller[i] = arr[st.top()];
        }

        st.push(i);
    }

    // Calculate the maximum absolute difference
    int maxDiff = 0;
    for (int i = 0; i < n; i++)
    {
        int diff = abs(leftSmaller[i] - rightSmaller[i]);
        maxDiff = std::max(maxDiff, diff);
    }

    return maxDiff;
}

int main()
{
    std::vector<int> arr = {2, 1, 8};

    int maxDifference = maxAbsDifference(arr);

    std::cout << "Maximum absolute difference: " << maxDifference << std::endl;

    return 0;
}
