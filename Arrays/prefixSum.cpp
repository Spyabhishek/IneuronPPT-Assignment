#include <bits/stdc++.h>
using namespace std;

void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    prefixSum(v);
     for (auto elem : v) {
        cout << elem << " ";
    }
 
    cout << endl;
   

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << endl;
    return 0;
}