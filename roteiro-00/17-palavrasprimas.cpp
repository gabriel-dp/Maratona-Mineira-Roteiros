#include <iostream>

using namespace std;

int convertCharToInt(char c) {
    if (c >= 65 && c <= 90) return c - 65 + 27;  // Uppercase
    return c - 97 + 1;                           // Lowercase
}

bool isPrime(int value) {
    for (int i = 2; i <= value / 2; i++) {
        if (value % i == 0) return false;
    }
    return true;
}

int main() {
    string input;
    int value;

    while (cin >> input) {
        value = 0;
        for (int i = 0; i < (int)input.size(); i++) {
            value += convertCharToInt(input[i]);
        }
        cout << (isPrime(value) ? "It is a prime word." : "It is not a prime word.") << '\n';
    }

    return 0;
}