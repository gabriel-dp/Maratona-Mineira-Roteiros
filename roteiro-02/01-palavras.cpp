#include <bits/stdc++.h>

using namespace std;

int main() {
    int p;
    string word;
    char previous;
    bool isSorted;

    cin >> p;
    while (p--) {
        cin >> word;

        previous = 0;
        isSorted = true;
        for (char c : word) {
            if (previous >= tolower(c)) {
                isSorted = false;
            }
            previous = tolower(c);
        }

        cout << word << ": " << (isSorted ? 'O' : 'N') << '\n';
    }

    return 0;
}