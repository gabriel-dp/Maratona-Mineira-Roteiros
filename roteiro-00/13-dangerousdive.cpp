#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, r, read;
    bool allSurvive;
    set<int> Divers;

    while (cin >> n >> r) {
        while (r--) {
            cin >> read;
            Divers.insert(read);
        }
        allSurvive = true;
        for (int i = 1; i <= n; i++) {
            if (Divers.find(i) == Divers.end()) {
                cout << i << " ";
                allSurvive = false;
            }
        }
        if (allSurvive)
            cout << "*";
        cout << "\n";
        Divers.clear();
    }

    return 0;
}