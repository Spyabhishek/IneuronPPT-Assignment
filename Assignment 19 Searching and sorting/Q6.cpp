#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> arr3(n1 + n2, 0);

    int i = 0;  // Pointer for arr1
    int j = 0;  // Pointer for arr2
    int k = 0;  // Pointer for arr3

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr3[k] = arr1[i];
            ++i;
        } else {
            arr3[k] = arr2[j];
            ++j;
        }
        ++k;
    }

    // Copy remaining elements from arr1, if any
    while (i < n1) {
        arr3[k] = arr1[i];
        ++i;
        ++k;
    }

    // Copy remaining elements from arr2, if any
    while (j < n2) {
        arr3[k] = arr2[j];
        ++j;
        ++k;
    }

    return arr3;
}

int main() {
    vector<int> arr1 = {1, 3, 4, 5};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    // Print the merged array
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
