#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
using namespace std;

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (ll i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            cout << n + (2 * k) << endl;
        } else {
            ll ans = n;
            for (ll i = 2; i <= n; ++i) {
                if (n % i == 0) {
                    ans += i;
                    --k;
                    break;
                }
            }
            if (k > 0) {
                ans += 2 * k;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
