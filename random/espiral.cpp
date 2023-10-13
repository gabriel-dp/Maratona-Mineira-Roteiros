#include <bits/stdc++.h>

using namespace std;

int main() {
    long int t, y, x;

    cin >> t;
    while (t--) {
        cin >> y >> x;

        long int diagonal = max(x, y);

        long int finalDiagonal = 2 + (diagonal - 2) * 2;
        long int result = 1 + (2 + finalDiagonal) * (diagonal - 1) / 2;

        if (x < diagonal) {
            if (y % 2 == 0)
                result += y - x;
            else
                result -= y - x;
        } else if (y < diagonal) {
            if (x % 2 == 0)
                result -= x - y;
            else
                result += x - y;
        }

        cout << result << "\n";
    }

    return 0;
}