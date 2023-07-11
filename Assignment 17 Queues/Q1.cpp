#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int firstUniqChar(const string &s)
{
    unordered_map<char, int> frequency;

    // Count the frequency of each character in the string
    for (char ch : s)
    {
        frequency[ch]++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; i < s.length(); i++)
    {
        if (frequency[s[i]] == 1)
        {
            return i;
        }
    }

    return -1; // Return -1 if no non-repeating character is found
}

int main()
{
    string s = "leetcode";

    int index = firstUniqChar(s);

    cout << "Index of the first non-repeating character: " << index << endl;

    return 0;
}
