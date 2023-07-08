#include <iostream>

using namespace std;

int main() {
    int n, read, result, test = 0;

    do {
        cin >> n;
        if (n == 0) break;

        for (int i = 1; i <= n; i++) {
            cin >> read;
            if (read == i) {
                result = read;
                while (++i <= n) cin >> read;  // Clear buffer
                break;
            }
        }

        cout << "Teste" << ' ' << ++test << '\n';
        cout << result << '\n'
             << '\n';
    } while (true);

    return 0;
}