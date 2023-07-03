#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 41, 5, 6, 7};
    // cout << sizeof(arr) << endl;
    // cout << sizeof(arr[0]) << endl;
    // cout << sizeof(arr) / sizeof(arr[0]) << endl;
    int size =  sizeof(arr) / sizeof(arr[0]);

    // To find the max

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;

   





    return 0;
}