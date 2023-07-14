#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) \
    for (i = m; i < n; i++)

map<char, tuple<int, int>> DIRECTIONS = {
    {'N', make_tuple(0, 1)},
    {'L', make_tuple(1, 0)},
    {'S', make_tuple(0, -1)},
    {'O', make_tuple(-1, 0)}};

int main() {
    int n, m, s, stickers;
    char read;
    int i, j, k;

    char direction;
    tuple<int, int> coords, newDirection;
    int x, y;

    do {
        cin >> n >> m >> s;
        if (n == 0 && m == 0 && s == 0) break;

        stickers = 0;
        char board[n][m];
        FOR(i, 0, n) {
            FOR(j, 0, m) {
                cin >> read;
                if (DIRECTIONS.find(read) != DIRECTIONS.end()) {
                    direction = read;
                    coords = make_tuple(j, i);
                    board[i][j] = '.';
                } else {
                    board[i][j] = read;
                }
            }
        }

        FOR(k, 0, s) {
            cin >> read;
            if (read == 'F') {
                x = get<0>(coords) + get<0>(DIRECTIONS[direction]);
                y = get<1>(coords) - get<1>(DIRECTIONS[direction]);
                if (x >= 0 && y >= 0 && x < m && y < n) {
                    switch (board[y][x]) {
                        case '*':
                            stickers++;
                        case '.':
                            board[get<1>(coords)][get<0>(coords)] = '.';
                            coords = make_tuple(x, y);
                        default:
                            break;
                    }
                }
            } else {
                if (read == 'D') {
                    newDirection = make_tuple(get<1>(DIRECTIONS[direction]), -get<0>(DIRECTIONS[direction]));
                } else if (read == 'E') {
                    newDirection = make_tuple(-get<1>(DIRECTIONS[direction]), get<0>(DIRECTIONS[direction]));
                }

                for (const auto pair : DIRECTIONS) {
                    if (pair.second == newDirection) {
                        direction = pair.first;
                    }
                }
            }
        }

        cout << stickers << '\n';
    } while (true);

    return 0;
}