#include <iostream>

using namespace std;

int main() {
    int rounds, aldo, a, beto, b, counter = 0;

    do {
        cin >> rounds;
        if (rounds == 0) break;

        aldo = 0, beto = 0;
        while (rounds--) {
            cin >> a;
            aldo += a;
            cin >> b;
            beto += b;
        }

        counter++;
        cout << "Teste " << counter << "\n";
        if (aldo > beto)
            cout << "Aldo";
        else
            cout << "Beto";
        cout << "\n\n";
    } while (true);

    return 0;
}