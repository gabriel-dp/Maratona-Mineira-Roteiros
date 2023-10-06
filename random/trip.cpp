#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, read;
    map<int, int> irrigation;  // <occurrence, amount>
    int months = 0, actual = 0;

    cin >> k;
    for (int i = 0; i < 12; i++) {
        cin >> read;
        irrigation[read]++;
    }

    for (auto it = irrigation.rbegin(); it.base() != irrigation.begin(); ++it) {
        for (int i = 0; i < it->second; i++) {
            if (actual >= k) break;
            actual += it->first;
            months++;
        }
        if (actual >= k) break;
    }

    cout << (actual >= k ? months : -1) << "\n";

    return 0;
}