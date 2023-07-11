#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findNearestGreaterFrequency(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n, -1); // Initialize the result vector with -1

    unordered_map<int, int> frequency; // Map to store the frequency of each element
    stack<int> indices;                // Stack to store the indices of elements

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        frequency[arr[i]]++; // Increment the frequency of the current element

        // Pop elements from the stack while their frequencies are less than or equal to the frequency of the current element
        while (!indices.empty() && frequency[arr[indices.top()]] <= frequency[arr[i]])
        {
            indices.pop();
        }

        // If the stack is not empty, the top element has a greater frequency than the current element
        if (!indices.empty())
        {
            result[i] = arr[indices.top()];
        }

        // Push the current element's index into the stack
        indices.push(i);
    }

    return result;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 2, 2, 11, 3, 3};

    vector<int> result = findNearestGreaterFrequency(arr);

    cout << "Nearest elements with greater frequency to the right are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
