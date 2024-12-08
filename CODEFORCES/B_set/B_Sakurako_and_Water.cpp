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

void solve() {
    int n;
    cin >> n;
    
    vector<vi> matrix(n, vi(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    auto solve = [&](const vector<vi>& mt, int pos, bool rw) -> int {
        int sz = mt.size();
        int ng = 0;
        
        for (int k = 0; k < sz - pos; ++k) {
            int elm = rw ? mt[pos + k][k] : mt[k][pos + k];
            ng = max(ng, -elm);
        }
        return ng;
    };

    auto ans = [&](const vector<vi>& mt) -> int {
        int sz = mt.size();
        int ttl = 0;
        for (int i = 0; i < sz; ++i) {
            ttl += solve(mt, i, true);
        }

        for (int j = 1; j < sz; ++j) {
            ttl += solve(mt, j, false);
        }

        return ttl;
    };
    
    p(ans(matrix));
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
