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
        int n, k;
        cin >> n >> k;
        vi a(n);
        rep(i, 0, n) cin >> a[i];
        sort(all(a));
        int ans = a.back();
        if (k == 1) {
            ans = max(ans, a[0] + a[1]);
            p(ans)
            return;
        }
        int c = min(n - 1, k);
        auto check = [&](int x) -> bool {
            if (x < a.back()) return false;
            int cnt = 0;
            rep(i, 0, n) {
                int s = 0;
                int j = i;
                while (j < n && s + a[j] <= x) {
                    s += a[j];
                    j++;
                }
                cnt++;
                i = j - 1;
            }
            return cnt <= c;
        };
        int low = a.back(), high = accumulate(all(a), 0), best = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid)) {
                best = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        p(best)
    };
    while (t--) {
        solve();
    }
    return 0;
}