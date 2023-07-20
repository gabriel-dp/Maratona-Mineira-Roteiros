#include <bits/stdc++.h>

using namespace std;

class Contestant {
   public:
    int actualEnergy, originalEnergy, originalPosition;
    vector<int> defeated;
    Contestant(int a, int b, int c) {
        actualEnergy = a;
        originalEnergy = b;
        originalPosition = c;
    }
};

int main() {
    int t, n, k, read;
    queue<Contestant> contestants;  // <actual, original>
    cin >> t;
    while (t--) {
        cin >> n >> k;

        for (int i = 0; i < (1 << n); i++) {
            cin >> read;
            contestants.push(Contestant(read, read, i + 1));
        }

        while (contestants.size() > 1) {
            auto first = contestants.front();
            contestants.pop();
            auto second = contestants.front();
            contestants.pop();

            if (first.actualEnergy > second.actualEnergy || (first.actualEnergy == second.actualEnergy && first.originalPosition < second.originalPosition)) {
                first.actualEnergy = min(first.actualEnergy - second.actualEnergy + k, first.originalEnergy);
                first.defeated.push_back(second.originalPosition);
                contestants.push(first);
            } else {
                second.actualEnergy = min(second.actualEnergy - first.actualEnergy + k, second.originalEnergy);
                second.defeated.push_back(first.originalPosition);
                contestants.push(second);
            }
        }

        auto winner = contestants.front();
        contestants.pop();
        cout << winner.originalPosition << '\n';
        for (auto defeated : winner.defeated) {
            cout << defeated << ' ';
        }
        cout << '\n';
    }

    return 0;
}