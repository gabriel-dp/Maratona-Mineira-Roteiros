#include <iostream>

int main() {
    int n, fat = 1;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        fat *= i;
    }

    std::cout << fat;

    return 0;
}