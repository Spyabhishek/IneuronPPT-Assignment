#include <bits/stdc++.h>
using namespace std;

void square(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] *= v[i];
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

    square(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}