#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    char team1, team2;
    queue<char> teams;

    for (char c = 'A'; c <= 'P'; c++) {
        teams.push(c);
    }

    while (teams.size() != 1) {
        team1 = teams.front();
        teams.pop();
        team2 = teams.front();
        teams.pop();

        cin >> m >> n;
        teams.push(m > n ? team1 : team2);
    }

    cout << teams.front() << '\n';

    return 0;
}