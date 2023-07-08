#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    
    // Count the number of set bits in n
    int count = 0;
    while (n > 0) {
        count += n & 1; // Check if the least significant bit is set
        n >>= 1; // Right shift by 1 to discard the least significant bit
    }
    
    // If there is only one bit set, n is a power of two
    return count == 1;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    
    if (isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is not a power of two." << endl;
    }
    
    return 0;
}
