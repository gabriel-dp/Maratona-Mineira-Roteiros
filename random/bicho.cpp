#include <bits/stdc++.h>

using namespace std;

int generateGroup(int x) {
    if (x == 0) return 99 / 4;
    return ((x - 1) % 100) / 4;
}

int main() {
    double v;
    int n, m;

    do {
        cin >> v >> n >> m;
        if (v == 0.0 && n == 0 && m == 0) break;

        // uses only the four last digits
        n %= 10000;
        m %= 10000;

        // convert it to string
        string ns = to_string(n);
        string ms = to_string(m);

        // add zeros
        while (ns.length() < 4)
            ns = "0" + ns;
        while (ms.length() < 4)
            ms = "0" + ms;

        // identify equal sequence starting at the end
        int equal = 0;
        for (int i = 3; i >= 0; i--) {
            if (ns[i] != ms[i]) break;
            equal++;
        }

        int multiplier = 0;
        switch (equal) {
            case 4:
                multiplier = 3000;
                break;
            case 3:
                multiplier = 500;
                break;
            case 2:
                multiplier = 50;
                break;
            default:;
                if (generateGroup(m) == generateGroup(n)) {
                    multiplier = 16;
                }
                break;
        }

        printf("%.2lf\n", v * multiplier);
    } while (true);

    return 0;
}