#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string read;
    array<int, 15> sequence;
    set<array<int, 15>> uniques;

    do {
        cin >> n;
        if (n == 0) break;

        uniques.clear();
        for (int i = 0; i < n; i++) {
            sequence = {0};
            cin >> read;
            for (char c : read) {
                (sequence[c - 65])++;
            }
            uniques.insert(sequence);
        }

        cout << uniques.size() << '\n';
    } while (true);

    return 0;
}