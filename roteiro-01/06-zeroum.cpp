#include <bits/stdc++.h>

using namespace std;

int main() {
    int players[3];

    while (cin >> players[0] >> players[1] >> players[2]) {
        switch (players[0] + players[1] + players[2]) {
            case 1:
                for (int i = 0; i < 3; i++) {
                    if (players[i] == 1) {
                        cout << (char)(65 + i) << '\n';
                        break;
                    }
                }
                break;
            case 2:
                for (int i = 0; i < 3; i++) {
                    if (players[i] == 0) {
                        cout << (char)(65 + i) << '\n';
                        break;
                    }
                }
                break;
            default:
                cout << '*' << '\n';
                break;
        }
    }

    return 0;
}