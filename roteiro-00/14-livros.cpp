#include <iostream>

using namespace std;

int main() {
    double q, d, p, x;

    do {
        cin >> q;
        if (q == 0) break;
        cin >> d >> p;

        x = abs((d * p * q) / (q - p));
        cout << (int)x << ' ' << (((int)x != 1) ? "paginas" : "pagina") << '\n';
    } while (true);

    return 0;
}