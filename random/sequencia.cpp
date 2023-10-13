#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long int array[n];
    long int last = array[0];
    long int total = 0;

    cin >> array[0];
    for (int i = 1; i < n; i++) {
        cin >> array[i];
        if (array[i] < array[i - 1]) {
            total += array[i - 1] - array[i];
            array[i] = array[i - 1];
        }
    }

    cout << total << "\n";

    return 0;
}