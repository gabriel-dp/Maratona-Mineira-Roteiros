#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, read, test = 0;
    int cards[13], sequence, score, pairs[2], triple;

    cin >> n;
    while (n--) {
        memset(cards, 0, 13 * sizeof(int));
        score = 0;
        sequence = 0;
        memset(pairs, 0, 2 * sizeof(int));
        triple = 0;

        for (int i = 0; i < 5; i++) {
            cin >> read;
            cards[read - 1]++;
        }

        for (int i = 0; i < 13; i++) {
            switch (cards[i]) {
                case 0:
                    sequence = 0;
                    break;
                case 1:
                    sequence++;
                    if (sequence == 5) {
                        score = (i + 1 - 4) + 200;
                    }
                    break;
                case 2:
                    pairs[(pairs[0] == 0 ? 0 : 1)] = i + 1;
                    break;
                case 3:
                    triple = i + 1;
                    break;
                default:
                    score = (i + 1) + 180;
                    break;
            }
        }
        if (score == 0) {
            if (triple) {
                score = triple + (pairs[0] == 0 ? 140 : 160);
            } else if (pairs[1] != 0) {
                score = 3 * max(pairs[0], pairs[1]) + 2 * min(pairs[0], pairs[1]) + 20;
            } else if (pairs[0] != 0) {
                score = pairs[0];
            }
        }

        cout << "Teste " << ++test << '\n'
             << score << "\n\n";
    }

    return 0;
}