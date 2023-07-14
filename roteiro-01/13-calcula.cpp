#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, result, read, test = 0;
    char operation;

    do {
        cin >> m;
        if (m == 0) break;

        cin >> result;
        while (m > 1) {
            cin >> operation;
            cin >> read;
            result += (operation == '+') ? read : -read;
            m--;
        }

        cout << "Teste " << ++test << '\n'
             << result << '\n'
             << '\n';
    } while (true);

    return 0;
}