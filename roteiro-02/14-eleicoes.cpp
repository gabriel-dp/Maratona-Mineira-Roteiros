#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, number;
    map<int, int> candidates;
    pair<int, int> winner = pair<int, int>(0,0);

    cin >> n;
    while (n--) {
        cin >> number;
        candidates[number]++;

        if(candidates[number] > winner.second) {
            winner = pair<int, int>(number, candidates[number]);
        }
    }

    cout << winner.first << '\n';

    return 0;
}