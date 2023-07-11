#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kadane(const vector<int> &nums)
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int maxSubarraySumCircular(const vector<int> &nums)
{
    int maxSum = kadane(nums);
    int totalSum = 0;

    // Calculate the total sum of the array
    for (int num : nums)
    {
        totalSum += num;
    }

    // Negate each element in the array
    vector<int> negatedNums(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        negatedNums[i] = -nums[i];
    }

    // Find the maximum sum of a non-empty subarray that wraps around
    int circularMaxSum = totalSum + kadane(negatedNums);

    // Return the maximum of the two sums
    return max(maxSum, circularMaxSum);
}

int main()
{
    vector<int> nums = {1, -2, 3, -2};

    int maxSum = maxSubarraySumCircular(nums);

    cout << "Maximum possible sum of a non-empty subarray: " << maxSum << endl;

    return 0;
}
