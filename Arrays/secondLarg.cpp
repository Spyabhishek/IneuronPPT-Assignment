#include <bits/stdtr1c++.h>
using namespace std;

int largestElementIndex(int arr[], int size)
{
    int max = INT_MIN;
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
    }
    return maxindex;
}

int main()
{
    int arr[5] = {1, 27, 35, 46, 5};

    int indexoflargest = largestElementIndex(arr, 5);
    cout << arr[indexoflargest] << endl;

    arr[indexoflargest] = -1;
    int indexofsecondlargest = largestElementIndex(arr, 5);

    cout << arr[indexofsecondlargest] << endl;

    /*
    // Largest element in array
    // int max = INT_MIN;

    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i]> max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << max << endl;

    */

    // Second Largest element

    return 0;
}