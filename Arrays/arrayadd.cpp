// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {10,2,3,4,6};
    int size =  sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    
    cout<< sum <<endl;

    return 0;
}