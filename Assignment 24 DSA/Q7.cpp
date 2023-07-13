#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> result;
    deque<int> window;

    for (int i = 0; i < nums.size(); i++)
    {
        // Remove elements from the front that are outside the current window
        if (!window.empty() && window.front() <= i - k)
        {
            window.pop_front();
        }

        // Remove elements from the back that are smaller than the current element
        while (!window.empty() && nums[i] >= nums[window.back()])
        {
            window.pop_back();
        }

        // Add the current index to the back of the deque
        window.push_back(i);

        // Add the maximum element from the front of the deque to the result
        if (i >= k - 1)
        {
            result.push_back(nums[window.front()]);
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);

    // Print the maximum sliding window
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
