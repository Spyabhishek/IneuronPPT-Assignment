#include <bits/stdc++.h>
using namespace std;

int countWordsLeft(const string &sequence)
{
    stack<string> st;
    unordered_map<string, int> wordCounts;

    // Split the sequence into individual words
    stringstream ss(sequence);
    string word;
    while (ss >> word)
    {
        // Check if the word is similar to the top element of the stack
        if (!st.empty() && st.top() == word)
        {
            // If the words are similar, destroy both words
            st.pop();
            wordCounts[word]--;
        }
        else
        {
            // Otherwise, push the word onto the stack and update its count
            st.push(word);
            wordCounts[word]++;
        }
    }

    // Count the number of words left in the sequence
    int count = 0;
    while (!st.empty())
    {
        st.pop();
        count++;
    }

    return count;
}

int main()
{
    string sequence = "ab aa aa bcd ab";

    int wordsLeft = countWordsLeft(sequence);

    cout << "Number of words left: " << wordsLeft << endl;

    return 0;
}
