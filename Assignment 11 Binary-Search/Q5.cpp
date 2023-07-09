#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(const vector<int> &nums1, const vector<int> &nums2)
{
    unordered_set<int> set(nums1.begin(), nums1.end());
    vector<int> intersection;

    for (int num : nums2)
    {
        if (set.count(num))
        {
            intersection.push_back(num);
            set.erase(num);
        }
    }

    return intersection;
}

int main()
{
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
