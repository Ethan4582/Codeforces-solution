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
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int tot = 0;
        rep(i, 0, n) {
            tot += (s1[i] == 'f') + (s2[i] == 'f');
        }
        int innf = 1e9;
        vector<vi> dp(3, vi(2, innf));
        dp[0][0] = 0;
        
        rep(i, 0, n) {
            int A = (s1[i] == 'f');
            int B = (s2[i] == 'f');
            vector<vi> ndp(3, vi(2, innf));
            rep(h, 0, 3) {
                rep(p, 0, 2) {
                    if (dp[h][p] == innf) continue;
            rep(a, 0, A + 1) {
                   rep(b, 0, B + 1) {
                            rep(dpp, 0, 3) {
                                int v = a + b - h - dpp;
                                if (v < 0) continue;

                                int chek = (A - a) + (B - b);
                                rep(u, 0, v + 1) {
                                    int d = v - u;

                                    if (u > a || d > b) continue;
                                    int np = (p + u - d) & 1;


                                    ndp[dpp][np] = min(ndp[dpp][np], dp[h][p] + chek + abs(u - d));
                                }
                            }
                        }
                    }
                }
            }
            dp = move(ndp);
        }
        
        int ans = tot;
        if (dp[0][0] <= tot) {
            ans = (dp[0][0] + (tot - dp[0][0]) % 2);
        }
        p(ans)
    };
    while (t--) {
        solve();
    }
    return 0;
}