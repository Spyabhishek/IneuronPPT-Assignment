#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int left, int right)
{
    int pivot = nums[right];
    int i = left - 1;

    for (int j = left; j < right; ++j)
    {
        if (nums[j] < pivot)
        {
            ++i;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[right]);

    return i + 1;
}

void quicksort(vector<int> &nums, int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(nums, left, right);

        quicksort(nums, left, pivotIndex - 1);
        quicksort(nums, pivotIndex + 1, right);
    }
}

vector<int> sortArray(vector<int> &nums)
{
    quicksort(nums, 0, nums.size() - 1);
    return nums;
}

int main()
{
    vector<int> nums = {5, 1, 1, 2, 0, 0};
    vector<int> sortedNums = sortArray(nums);

    // Print the sorted array
    for (int num : sortedNums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
