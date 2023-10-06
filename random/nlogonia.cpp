#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, m, x, y;

    while (true) {
        cin >> k;
        if (k == 0) break;

        cin >> n >> m;
        while (k--) {
            cin >> x >> y;
            string local;
            if (x < n && y > m) {
                local = "NO";
            } else if (x > n && y > m) {
                local = "NE";
            } else if (x > n && y < m) {
                local = "SE";
            } else if (x < n && y < m) {
                local = "SO";
            } else {
                local = "divisa";
            }
            cout << local << '\n';
        }
    }

    return 0;
}