#include <bits/stdc++.h>

using namespace std;

int main() {
    int len;
    string word;

    cin >> len >> word;

    map<char, int> letters;
    for (char c : word) {
        letters[c]++;
    }

    int zeros, ones;
    ones = letters['n'];
    zeros = letters['z'];

    for (int i = 0; i < ones; i++) {
        cout << 1;
        if (i < ones - 1) cout << " ";
    }
    if (ones > 1 && zeros > 0) cout << " ";
    for (int i = 0; i < zeros; i++) {
        cout << 0;
        if (i < zeros - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
