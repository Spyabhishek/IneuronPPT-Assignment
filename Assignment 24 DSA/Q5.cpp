#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nthUglyNumber(int n) {
    vector<int> ugly(n);
    ugly[0] = 1;
    int p2 = 0, p3 = 0, p5 = 0;

    for (int i = 1; i < n; i++) {
        int nextUgly = min({ugly[p2] * 2, ugly[p3] * 3, ugly[p5] * 5});

        if (nextUgly == ugly[p2] * 2) p2++;
        if (nextUgly == ugly[p3] * 3) p3++;
        if (nextUgly == ugly[p5] * 5) p5++;

        ugly[i] = nextUgly;
    }

    return ugly[n - 1];
}

int main() {
    int n = 10;
    int result = nthUglyNumber(n);
    cout << "The " << n << "th ugly number: " << result << endl;

    return 0;
}
