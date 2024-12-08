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
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define p(x) cout << (x) << "\n"  
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

const ll mod = 1e9 + 7;
const int N = 1e5 + 5;

using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    
  
    auto cvec = [](int sr) { return vector<vi>(sr + 1, vi(1, 0));};
    auto a = cvec(k);
   
    auto ip = [&]() {
        rep(i, 1, n + 1) { rep(j, 1, k + 1) {
                int t; cin >> t; t |= a[j].back();a[j].pb(t);
            } }
    };
    
    ip();
    
  
    while(q--) {
        int m;cin >> m;
        
        auto str = [](int cnt) {
            vector<pi> lt, gt;
            while(cnt--) {
                char kop; int sr, cr;    cin >> sr >> kop >> cr;
                
                (kop == '<' ? lt : gt).emplace_back(sr, cr);
            }
            return make_pair(lt, gt);
        };
        
        auto [s, g] = str(m);
        
        auto fndmx = [&](const vector<pi>& gq) {  int ps = 1;
            for(const auto& [sr, cr] : gq) {
                auto it = upper_bound(all(a[sr]), cr);
                ps = max(ps, int(it - a[sr].begin()));
            }
            return ps;
        };
        
        int mw = fndmx(g);
        
        if(mw > n) {
            p(-1);  continue;
        }
        
        
        auto chk = [&](const vector<pi>& itq, int ps) {
            return any_of(all(itq), 
                [&](const auto& q) {
                    return a[q.first][ps] >= q.second;
                });
        };
        
        bool sp = chk(s, mw);
        p(sp ? -1 : mw);
    }
}

int main() {
    fastread();
    int t = 1;
   
    while(t--) solve();
    return 0;
}
