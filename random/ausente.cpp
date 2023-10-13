#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, read;
    cin >> n;

    bool array[n] = {false};
    int i;
    for (i = 0; i < n; i++) {
        cin >> read;
        array[read - 1] = true;
    }
    for (i = 0; i < n; i++) {
        if (!array[i]) break;
    }

    cout << ++i << "\n";

    return 0;
}