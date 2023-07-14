#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    do {
        cin >> n;
        if (n == 0) break;

        cout << "f91(" << n << ") = " << (n < 101 ? 91 : n - 10) << '\n';
    } while (true);

    return 0;
}