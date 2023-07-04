#include <iostream>

using namespace std;

int main () {
    int limit, p, q, result;
    char c;

    cin >> limit;
    cin >> p >> c >> q;

    result = (c == '+') ? p+q : p*q;
    if (result > limit) {
        cout << "OVERFLOW"; 
    } else {
        cout << "OK";
    }

    cout << "\n";

    return 0;
}