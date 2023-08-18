#include <bits/stdc++.h>

using namespace std;

#define MAXN 100
#define MEMBERS 3

int pairs[MAXN][MAXN] = { 0 };

int getTotalTeam (vector<int> &team) {
    int total = 0;

    for (int i = 0; i < team.size(); i++) {
        for (int j = i + 1; j < team.size(); j++) {
            total += pairs[team[i]][team[j]];
        }
    }

    return total;
}

void buildTeam (int i, vector<int> &actual, vector<int> &max, int n) {
    if (actual.size() == MEMBERS) {
        if (max.empty() || getTotalTeam(actual) > getTotalTeam(max)) {
            max = actual;
        }
        return;
    }

    for (int j = i; j < n; j++) {
        actual.push_back(j);
        buildTeam(j + 1, actual, max, n);
        actual.pop_back();
    }
}

int main() {
    int n, m, p1, p2, q;

    cin >> n >> m;
    
    while (m--) {
        cin >> p1 >> p2 >> q;
        pairs[p1 - 1][p2 - 1] = q;
        pairs[p2 - 1][p1 - 1] = q;
    }

    vector<int> actual, max;
    buildTeam(0, actual, max, n);

    for (int i = 0; i < MEMBERS; i++) {
        cout << max[i] + 1;
        if (i < MEMBERS - 1) cout << ' ';
    }
    cout << '\n';

    return 0;
}