#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (nums[i] > nums[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main()
{
    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
    int maxLength = lengthOfLIS(nums);

    cout << "Length of the longest increasing subsequence: " << maxLength << endl;

    return 0;
}
