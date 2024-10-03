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

const ll N = 2e5 + 2;
const ll C = 10 + 1;
using namespace std;

class DSU {
public:
    DSU(int n) : prnt(n + 1), size(n + 1, 1) {
        iota(prnt.begin(), prnt.end(), 0); 
    }
    
    int fnd(int x) {
        if (prnt[x] != x) {    
            prnt[x] = fnd(prnt[x]); 
        }
        return prnt[x];
    }

    void unite(int x, int y) {
        x = fnd(x); 
        y = fnd(y);
        if (x != y) {
            if (size[x] < size[y]) {  
                swap(x, y);  
            }
            prnt[y] = x;
            size[x] += size[y];
        }
    }

private:
    vector<int> prnt;
    vector<int> size;
};

void solve() {
    ll n, m, a, d, k;
    cin >> n >> m;
    
    vector<vector<ll>> dp(n + 1, vector<ll>(C, 0));
    vector<vector<ll>> stcnt(n + 1, vector<ll>(C, 0));
    vector<vector<ll>> encnt (n + 1, vector<ll>(C, 0));
    
    DSU dsu(n);

    rep(i, 0, m) {
        cin >> a >> d >> k;
        stcnt[a][d]++;
        if (a + k * d <= n) {
            encnt [a + k * d][d]++;
        }
    }

  
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j < C; j++) {
            dp[i][j] = stcnt[i][j] - encnt [i][j];
            if (i - j < 1) continue;  
            
            if (dp[i - j][j]) {
                dsu.unite(i, i - j); 
                dp[i][j] += dp[i - j][j];
            }
        }
    }

  
    unordered_set<int> uniqueRoots;
      rep(i, 1, n + 1) {
        uniqueRoots.insert(dsu.fnd(i));
    }

    
    p(uniqueRoots.size());
}

int main() {
    fastread();
    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

