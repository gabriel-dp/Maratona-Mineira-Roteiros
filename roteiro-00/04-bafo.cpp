#include <iostream>

using namespace std;

int main() {
    int rounds, aldo, a, beto, b, counter = 0;

    do {
        cin >> rounds;

        aldo = 0, beto = 0;
        for (int i = 0; i < rounds; i++) {
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
    } while (rounds != 0);

    return 0;
}