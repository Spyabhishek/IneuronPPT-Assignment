#include <iostream>
#include <string>
using namespace std;

int countContiguousSubstrings(const string &S)
{
    int count = 0;
    int n = S.length();

    for (int i = 0; i < n; i++)
    {
        count++; // Each character itself is a valid substring

        int j = i - 1;
        while (j >= 0 && S[j] == S[i])
        {
            count += (i - j); // Increment count for each substring starting from j to i
            j--;
        }
    }

    return count;
}

int main()
{
    string S;
    cout << "Enter the string: ";
    cin >> S;

    int result = countContiguousSubstrings(S);
    cout << "Count of contiguous substrings: " << result << endl;

    return 0;
}
