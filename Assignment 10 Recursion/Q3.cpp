#include <iostream>
using namespace std;

void printSubsets(const string &set, int index, const string &subset)
{
    int n = set.length();

    if (index == n)
    {
        cout << "{" << subset << "}"
             << " ";
        return;
    }

    // Include the current character in the subset
    printSubsets(set, index + 1, subset + set[index]);

    // Exclude the current character from the subset
    printSubsets(set, index + 1, subset);
}

int main()
{
    string set;
    cout << "Enter the set: ";
    cin >> set;

    printSubsets(set, 0, "");

    return 0;
}
