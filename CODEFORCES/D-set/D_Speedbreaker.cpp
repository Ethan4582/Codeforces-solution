



#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

const ll mod = 1e9 + 7;
const int N = 1e5 + 5;

using namespace std;

int a[N];

void solve() {
    int n;
    cin >> n;
  vll mnp(n + 5, 1e18), mxp(n + 5, -1e18);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        mnp[a[i]] = min(mnp[a[i]], (ll)i);
        mxp[a[i]] = max(mxp[a[i]], (ll)i);
    }

    ll mn = 1e18, mx = -1e18, l = 1, r = n;

    for (int i = 1; i <= n; i++) {
        mn = min(mn, mnp[i]);
        mx = max(mx, mxp[i]);

        // Check if the range is valid
        if (mx - mn + 1 > i) {
            p(0);
            return;
        }

        l = max(l, mx - i + 1);
        r = min(r, mn + i - 1);
    }

    p(max(0LL, r - l + 1)); // Ensure non-negative result
}



