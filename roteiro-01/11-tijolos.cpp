#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (i = m; i < n; i++)

int main() {
    int n, read, x;
    vector<int> v1, v2;
    int i, j;

    cin >> n;
    while (n--) {
        v1.clear();
        v2.clear();
        FOR(i, 1, 6) {
            FOR(j, 0, i) {
                cin >> read;
                v2.push_back(read);
            }

            FOR(j, 0, (v1.size() + 1) / 2) {
                x = (v1[j * 2] - v2[j * 2] - v2[(j * 2) + 1]) / 2;

                cout << v2[j * 2] + x << ' ' << v2[(j * 2) + 1] + x;
                if (j != ((v1.size() + 1) / 2) - 1) cout << ' ';

                v2.insert(v2.begin() + (j * 2 + 1), x);
            }
            if (v1.size() > 0) cout << '\n';

            v1.swap(v2);
            v2.clear();
            FOR(j, 0, v1.size()) {
                cout << v1[j];
                if (j != v1.size() - 1) cout << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}