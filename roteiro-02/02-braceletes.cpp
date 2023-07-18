#include <bits/stdc++.h>

using namespace std;

bool isSubstring(string p, string t) {
    bool match = true;

    for (int i = 0; i < t.size(); i++) {
        match = true;
        for (int j = 0; j < p.size(); j++) {
            if (t[(i + j) % t.size()] != p[j]) {
                match = false;
                break;
            }
        }
        if (match) break;
    }

    return match;
}

int main() {
    int t;
    string pattern, text;
    bool match;

    cin >> t;
    while (t--) {
        cin >> pattern >> text;

        match = isSubstring(pattern, text);
        if (!match) {
            reverse(pattern.begin(), pattern.end());
            match = isSubstring(pattern, text);
        }

        cout << (match ? 'S' : 'N') << '\n';
    }

    return 0;
}