#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

struct Compare
{
    bool operator()(const pair<string, int> &a, const pair<string, int> &b)
    {
        if (a.second != b.second)
        {
            return a.second < b.second; // Sort by frequency (lower first)
        }
        return a.first > b.first; // Sort lexicographically (higher first)
    }
};

vector<string> topKFrequent(vector<string> &words, int k)
{
    unordered_map<string, int> wordCount;
    for (string word : words)
    {
        wordCount[word]++;
    }

    priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;
    for (auto &entry : wordCount)
    {
        pq.push(entry);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    vector<string> result;
    while (!pq.empty())
    {
        result.insert(result.begin(), pq.top().first);
        pq.pop();
    }

    return result;
}

int main()
{
    vector<string> words = {"i", "love", "leetcode", "i", "love", "coding"};
    int k = 2;
    vector<string> result = topKFrequent(words, k);

    // Print the k most frequent words
    for (string word : result)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
