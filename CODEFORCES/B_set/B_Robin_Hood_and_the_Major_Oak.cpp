#include <bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;

int main() {
    fastio
    int q; cin >> q;
    while (q--) {
        ll x, y, s = 0;
        cin >> x >> y;
        ll m = max(1LL, x - y + 1);
        s = (x + m) * (x - m + 1) / 2;
        cout << (s % 2 ? "NO\n" : "YES\n");
    }
    return 0;
}