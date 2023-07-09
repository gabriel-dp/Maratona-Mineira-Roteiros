#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, total = 7;
    map<int, int> values = {{0, 0}, {10, 1}, {30, 2}, {100, 5}};

    cin >> n;
    for (auto it = values.rbegin(); it != values.rend(); ++it) {
        if (n > it->first) {
            total += (n - it->first) * it->second;
            n = it->first;
        }
    }

    cout << total << '\n';

    return 0;
}