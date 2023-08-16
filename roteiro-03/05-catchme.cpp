#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t, field;

    cin >> t;
    while (t--) {
        cin >> field;
        cout << ((field % 3 == 0) ? field / 3 : 0) << '\n';
    }

    return 0;
}