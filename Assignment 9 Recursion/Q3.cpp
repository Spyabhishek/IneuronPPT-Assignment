#include <iostream>
using namespace std;

int factorial(int N)
{
    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;

    int fact = factorial(N);
    cout << "Factorial of " << N << " is: " << fact << endl;

    return 0;
}
