#include <iostream>

using namespace std;

int main() {
    int read, amount, total, instance = 0;

    do {
        cin >> amount;
        if (amount <= 0) break;

        total = 0;
        instance++;
        while (amount--) {
            cin >> read;
            if (total == read) {
                cout << "Instancia " << instance << "\n";
                cout << read << "\n";
                while (amount--) cin >> read;  // clear remaining inputs
                break;
            } else if (amount == 0) {
                cout << "Instancia " << instance << "\n";
                cout << "nao achei\n";
            } else {
                total += read;
            }
        }
    } while (true);

    return 0;
}