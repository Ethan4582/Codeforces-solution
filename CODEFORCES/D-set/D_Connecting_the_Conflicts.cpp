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
    int tc;
    if (!(cin >> tc)) return 0;

    auto proc = [&]() {
        int kt;
        cin >> kt;

        int htid = -1;
        int ppos = -1;

        auto skp = [](int cnt) {
            rep(e, 0, cnt) {
                int xa, ya;
                cin >> xa >> ya;
            }
        };

        auto fndpr = [](int sz, int& tgt) {
            vi dgr(sz + 1, 0);
            vector<vi> gph(sz + 1);
            rep(e, 0, sz - 1) {
                int u1, v1;
                cin >> u1 >> v1;
                gph[u1].pb(v1);
                gph[v1].pb(u1);
                dgr[u1]++;
                dgr[v1]++;
            }
            rep(i, 1, sz + 1) {
                if (dgr[i] == 1) {
                    tgt = gph[i][0];
                    break;
                }
            }
        };


        rep(idx, 1, kt + 1) {
            int tot;
            cin >> tot;
            if (tot >= 2 && htid == -1) {
                htid = idx;
                fndpr(tot, ppos);
            } else {
                skp(tot - 1);
            }
        }

        auto cnt2 = [](int r1, int c1, int r2, int c2) {
            cout << r1 << " " << c1 << " " << r2 << " " << c2 << "\n";
        };

        auto cnt1 = [&](int mtr, int mnd) {
            rep(idx, 1, kt + 1) {
                if (idx != mtr) {
                    cnt2(idx, 1, mtr, mnd);
                }
            }
        };


        if (htid == -1) {
            cnt1(1, 1);
        } else {
            cnt1(htid, ppos);
        }
    };

    while (tc--) {
        proc();
    }
    return 0;
}