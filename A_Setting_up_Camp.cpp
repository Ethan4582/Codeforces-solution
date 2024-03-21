#include <iostream>
#define ll long long
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll needPoly = (3 - b % 3) % 3;
        if (b > 0 && needPoly > c) {
            cout << "-1\n";
            continue;
        }

        c -= needPoly;
        b += needPoly;

        ll mn = a + c / 3 + (c % 3 + 1) / 2 + b / 3;
        cout << mn << '\n';
    }

    return 0;
}
