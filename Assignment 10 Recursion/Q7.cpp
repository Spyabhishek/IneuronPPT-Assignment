#include <iostream>
using namespace std;

void permute(string &str, int start, int end)
{
    if (start == end)
    {
        cout << str << " ";
        return;
    }

    for (int i = start; i <= end; i++)
    {
        swap(str[start], str[i]);
        permute(str, start + 1, end);
        swap(str[start], str[i]); // Backtrack: Restore the original order
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    permute(str, 0, str.length() - 1);

    return 0;
}
