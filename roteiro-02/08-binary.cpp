#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q, read, index, indexMIN, indexMAX;
    vector<int> v;

    scanf("%d %d", &n, &q);

    while (n--) {
        scanf("%d", &read);
        v.push_back(read);
    }

    while (q--) {
        scanf("%d", &read);

        indexMIN = 0;
        indexMAX = v.size() - 1;
        do {
            index = ((indexMAX + indexMIN) / 2);
            if (v[index] < read) {
                indexMIN = (index != indexMIN) ? index : index + 1;
            } else if (v[index] > read) {
                indexMAX = (index != indexMAX) ? index : index - 1;
            }
        } while (v[index] != read && (indexMIN != indexMAX || index != indexMIN));

        if (v[index] != read) {
            index = -1;
        } else {
            while (index != 0 && v[index - 1] == v[index]) {
                index--;
            }
        }

        printf("%d\n", index);
    }

    return 0;
}