#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (i = m; i < n; i++)

int main() {
    int n, i, j;

    do {
        cin >> n;
        if (n == 0) break;

        FOR(i, 1, n + 1) {
            FOR(j, 1, n + 1) {
                cout.width(3);
                cout << right << (abs(j - i) + 1);
                if (j != n) cout << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    } while (true);

    return 0;
}