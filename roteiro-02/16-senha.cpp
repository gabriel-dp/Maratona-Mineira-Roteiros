#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, conversion[10], digit, test = 0;
    char code;
    array<set<int>, 6> password;

    do {
        cin >> n;
        if (n == 0) break;
        
        while (n--) {
            for (int i = 0; i < 10; i++) {
                cin >> conversion[i];
            }

            for (int i = 0; i < 6; i++) {
                cin >> code;
                digit = (((int)code) - 65) * 2;
                if (password[i].empty()) {
                    password[i].insert(conversion[digit]);
                    password[i].insert(conversion[digit + 1]);
                } else {
                    set<int> newSet;
                    if (password[i].find(conversion[digit]) != password[i].end()) {
                        newSet.insert(conversion[digit]);
                    }
                    if (password[i].find(conversion[digit+1]) != password[i].end()) {
                        newSet.insert(conversion[digit+1]);
                    }
                    password[i] = newSet;
                }
            }
        }
        
        if (test != 0) cout << '\n';
        cout << "Teste " << ++test << '\n';
        for (int i = 0; i < 6; i++) {
            cout << *(password[i].begin());
            if (i != 5) cout << ' ';
            password[i].clear();
        }
        cout << '\n';
    } while (true);
    
    return 0;
}