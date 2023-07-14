#include <bits/stdc++.h>

using namespace std;

int main() {
    int h1, m1, h2, m2, t1, t2, elapsed;

    do {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;

        t1 = h1 * 60 + m1;
        t2 = h2 * 60 + m2;

        elapsed = (t1 < t2) ? (t2 - t1) : ((t2 + (60 * 24)) - t1);

        cout << elapsed << '\n';
    } while (true);

    return 0;
}