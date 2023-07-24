#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, counter;
    string read;
    map<string, int> trees;

    cin >> n;
    while (n--) {
        trees.clear();
        counter = 0;

        while (getline(cin, read)) {
            if (read.size() > 0) {
                trees[read]++;
                counter++;
            } else if ((read.size() == 0 && trees.size() > 0)) {
                break;
            }
        }

        for (auto tree : trees) {
            cout << tree.first;
            printf(" %.4f\n", (double)tree.second * 100 / counter);
        }
        if (n != 0) cout << '\n';
    }

    return 0;
}