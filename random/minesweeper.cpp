#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, t = 0;

    do {
        cin >> m >> n;
        if (m == 0 && n == 0) break;

        if (t > 0) printf("\n");

        char board[m][n];
        int solvedBoard[m][n] = {};

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];

                if (board[i][j] == '*') {
                    solvedBoard[i][j] = -1;
                    for (int k = i - 1; k <= i + 1; k++) {
                        for (int l = j - 1; l <= j + 1; l++) {
                            if (k >= 0 && k < m && l >= 0 && l < n && !(k == i && l == j) && solvedBoard[k][l] != -1) {
                                solvedBoard[k][l]++;
                            }
                        }
                    }
                }
            }
        }

        printf("Field #%d:\n", ++t);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (solvedBoard[i][j] >= 0) {
                    printf("%d", solvedBoard[i][j]);
                } else {
                    printf("*");
                }
            }
            printf("\n");
        }
    } while (true);

    return 0;
}