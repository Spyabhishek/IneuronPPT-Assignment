#include <iostream>
using namespace std;

void permute(string& S, int start, int end) {
    if (start == end) {
        cout << S << " ";
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(S[start], S[i]);
        permute(S, start + 1, end);
        swap(S[start], S[i]); // Backtrack: Restore the original order
    }
}

int main() {
    string S;
    cout << "Enter a string: ";
    cin >> S;

    permute(S, 0, S.length() - 1);

    return 0;
}
