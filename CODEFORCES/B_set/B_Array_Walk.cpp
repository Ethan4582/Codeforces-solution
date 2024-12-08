#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

using namespace std;

ll n, k, z; 

ll ok(vll a, ll i, ll k, int z) {
    if (k == 0 || i >= n || i < 0) {
        return 0;
    }
    ll val = 0;
    if (i < n)
        val = max(val, a[i] + ok(a, i + 1, k - 1, z));
    if (i > 0 && z > 0) {
        val = max(val, a[i] + ok(a, i - 1, k - 1, z - 1));
    }
    return val;
}

void solve() {
    cin >> n >> k >> z;
    vll a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }
    ll x = ok(a, 1, k, z) + a[0];
    p(x);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}



#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>

using namespace std;

int main() {
    int o;
    cin >> o;

    while (o--) {
        int n, k, z;
        cin >> n >> k >> z;

        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int s = 0;
        int mx = 0;

        for (int t = 0; t <= z; t++) {
            int pos = k - 2 * t;
            if (pos < 0) {
                continue;
            }
            mx = 0;
            s = 0;
            for (int i = 0; i <= pos; i++) {
                if (i < n - 1) {
                    mx = max(mx, a[i] + a[i + 1]);
                }
                s += a[i];
            }
            ans = max(ans, s + mx * t);
        }

        cout << ans << "\n";
    }

    return 0;
}



