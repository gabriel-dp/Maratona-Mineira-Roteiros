#include <iostream>

using namespace std;

int main() {
    long int n;

    cin >> n;

    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0) {
            cout << "nao\n";
            return 0;
        }
    }

    cout << "sim\n";
    return 0;
}