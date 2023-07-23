#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, read, total;

    while (cin >> n) {
        total = 0;
        vector<int> start(n + 1), end(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> read;
            start[read] = i;
        }

        for (int i = 1; i <= n; i++) {
            cin >> read;
            end[read] = i;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (start[i] < start[j] && end[i] > end[j]) {
                    total++;
                }
            }
        }

        cout << total << '\n';
    }

    return 0;
}