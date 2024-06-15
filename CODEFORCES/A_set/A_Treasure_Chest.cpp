#include <bits/stdc++.h>
#define ll long long
#define p(a) cout << a << "\n";

const ll mod = 1e9 + 7;

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        if (y < x) {
            p(x);
        } else {
            p(y + max(0, y - x - k));
        }
    }
    return 0;
}
