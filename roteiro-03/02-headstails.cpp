#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y, a, b;
    vector<tuple<int, int>> pairs;

    cin >> x >> y >> a >> b;

    int minA = max(a, b+1);   
    for (int j = minA; j <= x; j++) {
        for (int i = b; i <= y; i++) {
            if (j > i) {
                pairs.push_back(make_tuple(j, i));
            }
        }
    }

    printf("%d\n", (int) pairs.size());
    for (auto element : pairs) {
        printf("%d %d\n", get<0>(element), get<1>(element));
    }

    return 0;
}