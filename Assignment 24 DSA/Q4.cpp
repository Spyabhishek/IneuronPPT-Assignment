#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;

    for (string s : strs) {
        string sortedStr = s;
        sort(sortedStr.begin(), sortedStr.end());

        if (anagramMap.find(sortedStr) != anagramMap.end()) {
            anagramMap[sortedStr].push_back(s);
        } else {
            anagramMap[sortedStr] = {s};
        }
    }

    vector<vector<string>> result;
    for (auto it = anagramMap.begin(); it != anagramMap.end(); it++) {
        result.push_back(it->second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);

    // Print the grouped anagrams
    for (vector<string> group : result) {
        cout << "[";
        for (string s : group) {
            cout << s << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
