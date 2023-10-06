#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    long int first, second;

    cin >> t;
    while (t--) {
        cin >> first >> second;

        if (first % second == 0) {
            cout << 0;
        } else {
            long int up = (first / second + 1) * second;
            cout << up - first;
        }
        cout << "\n";
    }

    return 0;
}