#include <iostream>
#include <vector>
using namespace std;

int missingNumber(const vector<int> &nums)
{
    int missing = nums.size();

    for (int i = 0; i < nums.size(); i++)
    {
        missing ^= i ^ nums[i];
    }

    return missing;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    int missingNumber = missingNumber(nums);

    cout << "Missing number: " << missingNumber << endl;

    return 0;
}
