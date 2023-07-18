#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (i = m; i < n; i++)

bool isInsideInterval(int n, int limit1, int limit2) {
    if (n >= min(limit1, limit2) && n <= max(limit1, limit2)) return true;
    return false;
}

int main() {
    int w, h, n, positions;
    bool inside;
    int i, j, k;

    do {
        cin >> w >> h >> n;
        if (w == 0 && h == 0 && n == 0) break;

        int coords[n][4];
        positions = 0;

        FOR(i, 0, n) {
            FOR(j, 0, 4) {
                cin >> coords[i][j];
            }
        }

        FOR(i, 1, w + 1) {
            FOR(j, 1, h + 1) {
                inside = false;
                FOR(k, 0, n) {
                    if (isInsideInterval(i, coords[k][0], coords[k][2]) && isInsideInterval(j, coords[k][1], coords[k][3])) {
                        inside = true;
                        break;
                    }
                }
                if (!inside) positions++;
            }
        }

        if (positions == 0) {
            cout << "There is no empty spots.";
        } else if (positions == 1) {
            cout << "There is one empty spot.";
        } else {
            cout << "There are " << positions << " empty spots.";
        }
        cout << '\n';
    } while (true);

    return 0;
}