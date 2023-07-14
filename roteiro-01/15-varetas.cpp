#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, v, pairs, duos, rectangles;

    do {
        cin >> n;
        if (n == 0) break;

        pairs = 0;
        rectangles = 0;
        while (n--) {
            cin >> c >> v;
            pairs += (v - v % 2) / 2;
            duos = (pairs - pairs % 2) / 2;
            rectangles += duos;
            pairs -= duos * 2;
        }

        cout << rectangles << '\n';
    } while (true);

    return 0;
}