#include <iostream>
using namespace std;

int lastRemaining(int n) {
    int highestPower = 1;
    while (highestPower * 2 <= n) {
        highestPower *= 2;
    }
    
    int lastNumber = 2 * (n - highestPower) + 1;
    return lastNumber;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int lastNum = lastRemaining(n);
    cout << "Last number that remains: " << lastNum << endl;

    return 0;
}
