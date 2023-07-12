#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumGap(vector<int> &nums)
{
    if (nums.size() < 2)
    {
        return 0;
    }

    int maxDiff = 0;
    int maxElem = *max_element(nums.begin(), nums.end());

    int exp = 1;
    while (maxElem / exp > 0)
    {
        vector<int> count(10, 0);

        for (int num : nums)
        {
            count[(num / exp) % 10]++;
        }

        for (int i = 1; i < 10; ++i)
        {
            count[i] += count[i - 1];
        }

        vector<int> sortedNums(nums.size());
        for (int i = nums.size() - 1; i >= 0; --i)
        {
            count[(nums[i] / exp) % 10]--;
            sortedNums[count[(nums[i] / exp) % 10]] = nums[i];
        }

        nums = sortedNums;
        exp *= 10;
    }

    for (int i = 1; i < nums.size(); ++i)
    {
        maxDiff = max(maxDiff, nums[i] - nums[i - 1]);
    }

    return maxDiff;
}

int main()
{
    vector<int> nums = {3, 6, 9, 1};
    int maxDiff = maximumGap(nums);

    cout << "Maximum Gap: " << maxDiff << endl;

    return 0;
}
