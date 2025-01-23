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

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        vll a(n);
        rep(i, 0, n) cin >> a[i];

        if (n == 1) {
            if (a[0] % 2 == 0) {
                p(1);
            } else {
                p(0);
            }
        } else {
            int evncnt = 0, ddcnt = 0;
            rep(i, 0, n) {
                if (a[i] % 2 == 0) {
                    evncnt++;
                } else {
                    ddcnt++;
                }
            }

            int ans;
            if (evncnt > 0) {
                ans = ddcnt + 1;
            } else {
                ans = max(0, ddcnt - 1);
            }
            p(ans);
        }
    }
    return 0;
}
