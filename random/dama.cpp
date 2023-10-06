#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2, moves;

    do {
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;

        if (x1 == x2 && y1 == y2) {  // same square
            moves = 0;
        } else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {  // same row or same column or same diagonal
            moves = 1;
        } else {
            moves = 2;
        }

        cout << moves << '\n';
    } while (true);

    return 0;
}