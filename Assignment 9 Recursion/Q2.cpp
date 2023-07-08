#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n)
{
    int sum = (n * (n + 1)) / 2;
    return sum;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of the first " << n << " natural numbers: " << sum << endl;

    return 0;
}
