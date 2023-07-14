#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c1, c2, diff, test = 0;

    do {
        cin >> n;
        if (n == 0) break;

        cout << "Teste" << ' ' << ++test << '\n';

        diff = 0;
        while (n--) {
            cin >> c1 >> c2;
            diff += c1 - c2;
            cout << diff << '\n';
        }

        cout << '\n';
    } while (true);

    return 0;
}