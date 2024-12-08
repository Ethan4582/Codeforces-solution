#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

    
        long long max1 = n - (n % x) + y;
        long long max2 = max1 - x;

        long long res = (max1 > n) ? max2 : max1;

        cout << res << endl;
    }

    return 0;
}