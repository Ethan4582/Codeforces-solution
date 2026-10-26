#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    fastread();
    int t;
    if (!(cin >> t)) return 0;

    auto solve = [&]() {
        int n;
        ll x;
        cin >> n >> x;
        vll a(n);
        rep(i, 0, n) cin >> a[i];

        auto check = [&](ll k) {
            ll tot = 0;
            int i = 0;
            while (i < n) {
                int j = i;
                while (j + 1 < n && a[j + 1] - a[j] <= k) {
                    j++;
                }
                if (j > i) {
                    i = j + 1;
                } else {
                    if (i + 1 < n && (a[i + 1] - a[i] - 1) / k <= 1) {
                        tot += 1;
                        j = i + 1;
                        while (j + 1 < n && a[j + 1] - a[j] <= k) {
                            j++;
                        }
                        i = j + 1;
                    } else {
                        tot += 1;
                        i++;
                    }
                }
            }
            return tot <= x;
        };

        ll lw = 1, hg = 1e9, ans = 1e9;
        while (lw <= hg) {
            ll mid = lw + (hg - lw) / 2;
            if (check(mid)) {
                ans = mid;
                hg = mid - 1;
            } else {
                lw = mid + 1;
            }
        }
        p(ans);
    };

    while (t--) {
        solve();
    }
    return 0;
}