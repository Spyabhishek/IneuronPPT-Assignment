#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(const vector<int> &nums)
{
    int slow = nums[0];
    int fast = nums[0];

    // Move slow one step and fast two steps at a time
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Reset slow to the first element
    slow = nums[0];

    // Move slow and fast one step at a time until they meet again
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    int repeatedNumber = findDuplicate(nums);

    cout << "Repeated number: " << repeatedNumber << endl;

    return 0;
}
