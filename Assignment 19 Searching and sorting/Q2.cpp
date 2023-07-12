#include <iostream>
#include <vector>
using namespace std;

struct Number
{
    int value;
    int index;
};

void merge(vector<Number> &nums, int start, int mid, int end, vector<int> &counts)
{
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    vector<Number> left(leftSize);
    vector<Number> right(rightSize);

    for (int i = 0; i < leftSize; ++i)
    {
        left[i] = nums[start + i];
    }

    for (int i = 0; i < rightSize; ++i)
    {
        right[i] = nums[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = start;
    int smallerCount = 0;

    while (i < leftSize && j < rightSize)
    {
        if (left[i].value <= right[j].value)
        {
            counts[left[i].index] += smallerCount;
            nums[k] = left[i];
            ++i;
        }
        else
        {
            nums[k] = right[j];
            ++j;
            ++smallerCount;
        }
        ++k;
    }

    while (i < leftSize)
    {
        counts[left[i].index] += smallerCount;
        nums[k] = left[i];
        ++i;
        ++k;
    }

    while (j < rightSize)
    {
        nums[k] = right[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<Number> &nums, int start, int end, vector<int> &counts)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;

        mergeSort(nums, start, mid, counts);
        mergeSort(nums, mid + 1, end, counts);
        merge(nums, start, mid, end, counts);
    }
}

vector<int> countSmaller(vector<int> &nums)
{
    int n = nums.size();
    vector<Number> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        numbers[i].value = nums[i];
        numbers[i].index = i;
    }

    vector<int> counts(n, 0);

    mergeSort(numbers, 0, n - 1, counts);

    return counts;
}

int main()
{
    vector<int> nums = {5, 2, 6, 1};
    vector<int> counts = countSmaller(nums);

    // Print the counts of smaller elements
    for (int count : counts)
    {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
