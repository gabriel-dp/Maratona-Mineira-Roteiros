#include <bits/stdc++.h>

using namespace std;

int main() {
    const int money[] = {100, 50, 20, 10, 5, 2, 1};
    int n;

    cin >> n;
    cout << n << '\n';
    for (int i = 0; i < sizeof(money) / sizeof(int); i++) {
        cout << n / money[i] << " nota(s) de R$ " << money[i] << ",00" << '\n';
        n %= money[i];
    }

    return 0;
}