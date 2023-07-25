#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for (int i = m; i < n; i++)

int main() {
    int n, read, total = 0;
    array<vector<int>, 4> cols;
    array<vector<int>, 2> sum;

    cin >> n;
    FOR(i, 0, n) {
        FOR(j, 0, 4) {
            cin >> read;
            cols[j].push_back(read);
        }
    }

    FOR(k, 0, 2) {
        FOR(i, 0, n) {
            FOR(j, 0, n) {
                sum[k].push_back(cols[k * 2].at(i) + cols[k * 2 + 1].at(j));
            }
        }
    }

    sort(sum[1].begin(), sum[1].end());

    FOR(i, 0, sum[0].size()) {
        int search = 0 - sum[0].at(i);
        auto finded = equal_range(sum[1].begin(), sum[1].end(), search);
        if (finded.first != sum[1].end() && !(search < *finded.first)) {
            total += (finded.second - finded.first);
        }
    }

    cout << total;

    return 0;
}