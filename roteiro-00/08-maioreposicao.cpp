#include <iostream>

using namespace std;

int main() {
    int read, highest = -1, position;

    for (int i = 1; i <= 100; i++) {
        cin >> read;
        if (read > highest) {
            highest = read;
            position = i;
        }
    }

    cout << highest << "\n"
         << position << "\n";

    return 0;
}