#include <iostream>

using namespace std;

bool canRepresentBST(int arr[], int n) {
    int i = 1;

    while (i < n) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
        i++;
    }

    return true;
}

int main() {
    int arr1[] = {7, 4, 12, 3, 6, 8, 1, 5, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    bool result1 = canRepresentBST(arr1, n1);
    cout << "Output 1: " << (result1 ? "Yes" : "No") << endl;

    int arr2[] = {11, 6, 13, 5, 12, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    bool result2 = canRepresentBST(arr2, n2);
    cout << "Output 2: " << (result2 ? "Yes" : "No") << endl;

    return 0;
}
