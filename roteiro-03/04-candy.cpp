#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum, result, read;

    do {
        cin >> n;
        if (n == -1) break;

        sum = 0;
        result = 0;
        vector<int> packets;

        for (int i = 0; i < n; i++) {
            cin >> read;
            sum += read;
            packets.push_back(read);
        }

        // Checks if the sum/n is a integer number
        if (((int)(((float) sum / n) * 10)) % 10 != 0) {
            result = -1;
        } else {
            for (auto packet : packets) {
                result += abs((sum/n) - packet);
            }
            result /= 2;
        }

        cout << result << '\n';
    } while (true);

    return 0;
}