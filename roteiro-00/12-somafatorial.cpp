#include <iostream>

using namespace std;

#define LIMIT 20

void calcFat(long long* vector) {
    long long fat = 1;

    vector[0] = 1;
    for (int i = 1; i <= LIMIT; i++) {
        fat *= i;
        vector[i] = fat;
    }
}

int main() {
    long long vector[LIMIT + 1];
    int m, n;

    calcFat(vector);

    while (cin >> m >> n) {
        cout << vector[m] + vector[n] << "\n";
    }

    return 0;
}