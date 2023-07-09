#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, fib = 1, prev = 0, aux;

    cin >> n;
    while (n--) {
        cout << prev;
        if (n >= 1) cout << ' ';

        aux = fib;
        fib = fib + prev;
        prev = aux;
    }

    cout << '\n';

    return 0;
}