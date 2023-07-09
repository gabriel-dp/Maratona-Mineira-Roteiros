#include <bits/stdc++.h>

using namespace std;

int main() {
    int d;
    string n;
    bool printed;

    do {
        cin >> d >> n;
        if (d == 0 && n == "0") break;

        printed = false;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] != ((char)d + 48)) {
                if (printed || (!printed && n[i] != '0')) {
                    cout << n[i];
                    printed = true;
                }
            }
        }

        if (!printed) cout << '0';
        cout << '\n';
    } while (true);

    return 0;
}