#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Write C++ code here
    int arr[] = {2, 4, 1, 3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int sum = 0;

    // Brute force
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             arr[i] = arr[j] = -1;
    //         }
    //     }
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > -1)
    //     {
    //         cout << arr[i];
    //     }
    // }

    // using XOR
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans << endl;

    return 0;
}