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
using namespace std;

void solve() {
    int m;
    cin >> m;
    vi a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    if (m == 1) {
        cout << "1\n";
        return;
    }
    if (m % 2 == 0) {
        int res = a[1] - a[0];
        for (int i = 2; i < m; i += 2) {
            res = max(res, a[i + 1] - a[i]);
        }
        cout << res << '\n';
    } else {
        int res = INT_MAX;
        for (int i = 0; i < m; i++) {
            vi temp;
            for (int j = 0; j < m; j++) {
                if (j == i) continue;
                temp.push_back(a[j]);
            }
            int lmt = temp[1] - temp[0];
            for (int j = 2; j < m - 1; j += 2) {
                lmt = max(lmt, temp[j + 1] - temp[j]);
            }
            res = min(res, lmt);
        }
        p(res)
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
