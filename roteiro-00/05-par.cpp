#include <iostream>

using namespace std;

int main() {
    int rounds, valueP1, valueP2, counter = 0;
    char nameP1[11], nameP2[11];

    do {
        cin >> rounds;
        if (rounds == 0) break;

        cout << "Teste " << ++counter << "\n";

        cin >> nameP1 >> nameP2;
        while (rounds--) {
            cin >> valueP1 >> valueP2;
            cout << (((valueP1 + valueP2) % 2 == 0) ? nameP1 : nameP2) << "\n";
        }

        cout << "\n";
    } while (true);

    return 0;
}