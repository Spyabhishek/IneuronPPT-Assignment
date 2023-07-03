#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 4, 3, 2, 2, 1, 1};
    int n = 7;
    int d = 2;
    d = d % n;

    reverse(arr, d, n - 1);
    reverse(arr, 0, d - 1);
    reverse(arr, 0, n - 1);

    return 0;
}