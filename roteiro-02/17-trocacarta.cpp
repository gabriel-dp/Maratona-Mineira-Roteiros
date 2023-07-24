#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, read;
    set<int> tradableA, tradableB, repeated;

    do {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        tradableA.clear();
        tradableB.clear();
        repeated.clear();

        while (a--) {
            cin >> read;
            tradableA.insert(read);
        }

        while (b--) {
            cin >> read;
            if (tradableA.find(read) == tradableA.end()) {
                tradableB.insert(read);
            } else {
                repeated.insert(read);
            }
        }

        for (auto card : repeated) {
            tradableA.erase(card);
        }

        cout << min(tradableA.size(), tradableB.size()) << '\n';
    } while (true);

    return 0;
}