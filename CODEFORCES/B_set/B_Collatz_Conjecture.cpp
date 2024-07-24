#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        for (int i = 0; i < k; i++) {
            x++;
            while (x % y == 0) {
                x /= y;
            }
            if (x < y) break;
        }

        cout << x << endl;
    }
    return 0;
}
