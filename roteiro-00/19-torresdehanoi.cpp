#include <iostream>

using namespace std;

int main() {
    int n, test = 0;

    do {
        cin >> n;
        if (n == 0) break;

        cout << "Teste " << ++test << '\n';
        cout << (1 << n) - 1 << '\n'
             << '\n';
    } while (true);

    return 0;
}