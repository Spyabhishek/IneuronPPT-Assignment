#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 43, 5};
    int k = 43;

    int isBool = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == k)
        {
            isBool = true;
        }
    }

    cout << isBool << endl;

    return 0;
}