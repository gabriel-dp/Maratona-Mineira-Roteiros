#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, m, n;
    map<string, string> dictionary;
    string original, translation, music;

    cin >> t;
    while (t--) {
        dictionary.clear();
        cin >> m >> n;

        getline(cin, original);  // Removes previous \n
        while (m--) {
            getline(cin, original);
            getline(cin, translation);
            dictionary[original] = translation;
        }

        while (n--) {
            getline(cin, music);
            stringstream ss(music);
            while (ss >> original) {
                cout << ((dictionary[original] != "") ? dictionary[original] : original);
                if (!ss.str().empty()) cout << ' ';
            }
        }

        cout << '\n';
    }

    return 0;
}