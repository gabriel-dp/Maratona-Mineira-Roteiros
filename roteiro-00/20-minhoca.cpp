#include <iostream>

using namespace std;

int main() {
    int m, n, read, greater;

    cin >> m >> n;

    int rows[m] = {0};
    int cols[n] = {0};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> read;
            rows[i] += read;
            cols[j] += read;
        }
    }

    greater = rows[0];
    for (int i = 0; i < m; i++) {
        if (rows[i] > greater) greater = rows[i];
    }
    for (int i = 0; i < n; i++) {
        if (cols[i] > greater) greater = cols[i];
    }

    cout << greater;

    return 0;
}