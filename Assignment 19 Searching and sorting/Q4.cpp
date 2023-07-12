#include <iostream>
#include <vector>
using namespace std;

void pushZerosToEnd(vector<int> &nums)
{
    int left = 0;
    int right = 0;
    int n = nums.size();

    while (right < n)
    {
        if (nums[right] != 0)
        {
            swap(nums[left], nums[right]);
            ++left;
        }
        ++right;
    }
}

int main()
{
    vector<int> nums = {1, 2, 0, 0, 0, 3, 6};

    pushZerosToEnd(nums);

    // Print the modified array
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>

void alternateArrange(std::vector<int>& nums) {
    int left = 0;
    int right = 0;
    int n = nums.size();

    while (right < n) {
        if (nums[right] > 0 && nums[left] < 0) {
            int temp = nums[right];

            for (int i = right; i > left; --i) {
                nums[i] = nums[i - 1];
            }

            nums[left] = temp;
            ++left;
        }

        ++right;
    }
}

int main() {
    std::vector<int> nums = {1, 2, 3, -4, -1, 4};

    alternateArrange(nums);

    // Print the modified array
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
