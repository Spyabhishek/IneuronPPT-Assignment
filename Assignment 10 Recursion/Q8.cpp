#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int countConsonants(const string &str)
{
    int consonantCount = 0;

    for (char ch : str)
    {
        if (isalpha(ch) && !isVowel(ch))
        {
            consonantCount++;
        }
    }

    return consonantCount;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int result = countConsonants(str);
    cout << "Total number of consonants: " << result << endl;

    return 0;
}
