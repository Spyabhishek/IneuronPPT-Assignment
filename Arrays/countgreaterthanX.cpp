#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(6);
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << v[i] << " ";
    // }

    cout << "Enter the X" << endl;
    int x;
    cin >> x;

    int counter = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            counter++;
        }
    }

    cout << counter;

    return 0;
}