#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int majority = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            majority = nums[i];
            count = 1;
        } else if (nums[i] == majority) {
            count++;
        } else {
            count--;
        }
    }

    return majority;
}

int main() {
    vector<int> nums = {3, 2, 3};
    int result = majorityElement(nums);
    cout << "Majority element: " << result << endl;

    return 0;
}
