#include <bits/stdc++.h>

using namespace std;

#define PII pair<int, int>

bool isValid(int x, int y, int n) {
    return x >= 0 && x <= n && y >= 0 && y <= n;
}

int main() {
    int n, k, x, y, d;

    set<PII> actual_possible;

    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> x >> y >> d;

        set<PII> new_possible;
        for (int j = -d; j <= d; j++) {
            PII left = make_pair(x - (d - abs(j)), y - j);
            PII right = make_pair(x + (d - abs(j)), y - j);
            if (isValid(left.first, left.second, n)) {
                new_possible.insert(left);
            }
            if (isValid(right.first, right.second, n)) {
                new_possible.insert(right);
            }
        }

        if (i == 0) {  // First iteration
            actual_possible = new_possible;
        } else {
            set<PII> intersection;
            set_intersection(actual_possible.begin(), actual_possible.end(), new_possible.begin(), new_possible.end(), inserter(intersection, intersection.begin()));
            actual_possible = intersection;
        }
    }

    if (actual_possible.size() == 1) {
        cout << actual_possible.begin()->first << " " << actual_possible.begin()->second << '\n';
    } else {
        cout << "-1 -1\n";
    }

    return 0;
}