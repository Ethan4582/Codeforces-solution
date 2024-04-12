#include <iostream>
#include <cmath>
using namespace std;

bool hasOddDivisor(long long n) {
    for (long long x = 3; x * x <= n; x += 2) {
        if (n % x == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "NO\n";
        } else {
            if (hasOddDivisor(n)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
