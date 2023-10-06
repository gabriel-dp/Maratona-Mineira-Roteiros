#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, pags, o;

    do {
        cin >> n >> p;
        if (n == 0 && p == 0) break;

        pags = n / p;
        if (n % p != 0) pags++;

        cout << "Poo";
        for (int i = 7; i <= pags && i <= 20; i++) {
            cout << "o";
        }
        cout << "dle\n";
    } while (true);

    return 0;
}