#include <iostream>

int main() {
    int n, x, total = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        total += x;
    }

    std::cout << total;

    return 0;
}