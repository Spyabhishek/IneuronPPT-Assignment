#include <iostream>
using namespace std;

int findMax(int arr[], int start, int end) {
    if (start == end) {
        return arr[start];
    }

    int mid = (start + end) / 2;
    int maxLeft = findMax(arr, start, mid);
    int maxRight = findMax(arr, mid + 1, end);

    return (maxLeft > maxRight) ? maxLeft : maxRight;
}

int main() {
    int arr[] = {1, 4, 3, -5, -4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, 0, n - 1);
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
