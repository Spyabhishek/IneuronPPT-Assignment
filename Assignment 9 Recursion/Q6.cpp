#include <iostream>
using namespace std;

int findNthTerm(int a, int d, int N)
{
    int nthTerm = a + (N - 1) * d;
    return nthTerm;
}

int main()
{
    int a, d, N;
    cout << "Enter the first term (a): ";
    cin >> a;
    cout << "Enter the common difference (d): ";
    cin >> d;
    cout << "Enter the value of N: ";
    cin >> N;

    int nthTerm = findNthTerm(a, d, N);
    cout << "The " << N << "th term of the series is: " << nthTerm << endl;

    return 0;
}
