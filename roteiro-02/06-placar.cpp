#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, instance = 0;

    string name;
    int score;
    tuple<string, int> last;

    while (cin >> n) {
        last = make_tuple("", 11);
        while (n--) {
            cin >> name >> score;
            if (score < get<1>(last)) {
                last = make_tuple(name, score);
            } else if (score == get<1>(last)) {
                string nameAux = name, lastAux = get<0>(last);
                transform(nameAux.begin(), nameAux.end(), nameAux.begin(), ::tolower);
                transform(lastAux.begin(), lastAux.end(), lastAux.begin(), ::tolower);
                last = make_tuple((nameAux > lastAux ? name : get<0>(last)), score);
            }
        }

        cout << "Instancia " << ++instance << '\n'
             << get<0>(last) << '\n'
             << '\n';
    }

    return 0;
}