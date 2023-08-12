#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, read;

    do {
        cin >> n;
        if (n == 0) break;

        int votes[n] = { 0 };
        int max = 0;
        for (int i = 0; i < n; i++) {    
            for (int j = 0; j < n; j++) {
                cin >> read;
                if (read == 1) {
                    votes[j]++;
                    if (votes[j] > max) max = votes[j];
                }
            }
        }

        cout << max << '\n';
    } while (true);

    return 0;
}