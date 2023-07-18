#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    int all[n];

    for (int i = 0; i < n; i++) {
        cin >> all[i];
    }

    sort(all, all + n);
    cout << all[n / 2] << '\n';

    return 0;
}