#include <iostream>
#include <vector>
using namespace std;

void alternateArrange(vector<int> &nums)
{
    int left = 0;
    int right = 0;
    int n = nums.size();

    while (right < n)
    {
        if (nums[right] > 0 && nums[left] < 0)
        {
            int temp = nums[right];

            for (int i = right; i > left; --i)
            {
                nums[i] = nums[i - 1];
            }

            nums[left] = temp;
            ++left;
        }

        ++right;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, -4, -1, 4};

    alternateArrange(nums);

    // Print the modified array
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
