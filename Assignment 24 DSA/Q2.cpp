#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int start = 0;
    int end = 0;
    unordered_set<char> seen;
    int maxLength = 0;

    while (end < s.length())
    {
        if (seen.find(s[end]) == seen.end())
        {
            seen.insert(s[end]);
            end++;
            maxLength = max(maxLength, end - start);
        }
        else
        {
            seen.erase(s[start]);
            start++;
        }
    }

    return maxLength;
}

int main()
{
    string s = "pwwkew";
    int result = lengthOfLongestSubstring(s);
    cout << "Length of longest substring without repeating characters: " << result << endl;

    return 0;
}
