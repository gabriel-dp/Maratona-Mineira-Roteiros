#include <bits/stdc++.h>

using namespace std;

char convertIntToChar(int n) {
    if (n <= 9) return n + 48;
    return n + 65 - 10;
}

int main() {
    string a, b, result;
    long int sum;

    do {
        cin >> a >> b;
        if (a == "0" && b == "0") break;

        result = "";
        sum = stoi(a, NULL, 36) + stoi(b, NULL, 36);
        while (sum > 0) {
            result = convertIntToChar(sum % 36) + result;
            sum /= 36;
        }

        cout << result << "\n";
    } while (true);

    return 0;
}