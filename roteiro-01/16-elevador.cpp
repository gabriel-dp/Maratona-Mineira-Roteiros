#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, s, e, actual = 0, wasFull = false;

    cin >> n >> c;

    while (n--) {
        cin >> s >> e;
        actual += (-s + e);
        if (actual > c) wasFull = true;
    }

    cout << (wasFull ? 'S' : 'N') << '\n';

    return 0;
}