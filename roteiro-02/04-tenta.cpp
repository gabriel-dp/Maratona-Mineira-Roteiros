#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    do {
        cin >> n;
        if (n == 0) break;

        int array[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        sort(array, array + n);

        do {
            for (int i = 0; i < n; i++) {
                cout << array[i];
                if (i != n - 1) cout << ' ';
            }
            cout << '\n';
        } while (next_permutation(array, array + n));
        cout << '\n';
    } while (true);

    return 0;
}