#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, d, read, impeded;

    do {
        cin >> a >> d;
        if (a == 0 && d == 0) break;

        int atk[a], def[d];
        for (int i = 0; i < a; i++)
            cin >> atk[i];

        for (int i = 0; i < d; i++)
            cin >> def[i];
        sort(def, def + d);

        impeded = false;
        for (int i = 0; i < a; i++) {
            if (atk[i] < def[1]) {
                impeded = true;
                break;
            }
        }

        cout << (impeded ? 'Y' : 'N') << '\n';
    } while (true);

    return 0;
}