#include <iostream>
using namespace std;

int mySqrt(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }

    int left = 0;
    int right = x;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        long long square = static_cast<long long>(mid) * mid;

        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return right;
}

int main()
{
    int x = 4;
    int result = mySqrt(x);

    cout << "Square root of " << x << " rounded down: " << result << endl;

    return 0;
}
