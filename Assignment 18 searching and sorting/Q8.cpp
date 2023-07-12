#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool find132pattern(vector<int> &nums)
{
    stack<int> st;
    int s2 = INT_MIN;
    int n = nums.size();

    for (int i = n - 1; i >= 0; --i)
    {
        if (nums[i] < s2)
        {
            return true;
        }

        while (!st.empty() && nums[i] > st.top())
        {
            s2 = st.top();
            st.pop();
        }

        st.push(nums[i]);
    }

    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    bool has132pattern = find132pattern(nums);

    cout << "Has 132 pattern: " << (has132pattern ? "true" : "false") << endl;

    return 0;
}
