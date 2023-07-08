#include <bits/stdc++.h>
using namespace std;

int main() {
    double N, P;
    cout << "Enter the base number (N): ";
    cin >> N;
    cout << "Enter the power (P): ";
    cin >> P;

    double result = pow(N, P);

    cout << "Result: " << result << endl;

    return 0;
}
