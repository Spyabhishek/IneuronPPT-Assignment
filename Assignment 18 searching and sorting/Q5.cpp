#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> numSet;

    for (int num : nums)
    {
        if (numSet.count(num) > 0)
        {
            return true;
        }
        numSet.insert(num);
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    bool containsDup = containsDuplicate(nums);

    cout << "Contains Duplicate: " << (containsDup ? "true" : "false") << endl;

    return 0;
}
