#include <iostream>

using namespace std;

#define FOR(i, m, n) \
    for (i = m; i < n; i++)

int main() {
    int n, i, j;

    while (cin >> n) {
        FOR(i, 0, n) {
            FOR(j, 0, n) {
                if (j == n - i - 1)
                    cout << 2;
                else if (j == i)
                    cout << 1;
                else
                    cout << 3;
            }
            cout << '\n';
        }
    }

    return 0;
}