#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int cntBlack = 0;
        for (int j = 0; j < m; j++) {
            cntBlack += a[i][j];
        }
        ans += (1ll << cntBlack) - 1;
        ans += (1ll << (m - cntBlack)) - 1;
    }

    for (int j = 0; j < m; j++) {
        int cntBlack = 0;
        for (int i = 0; i < n; i++) {
            cntBlack += a[i][j];
        }
        ans += (1ll << cntBlack) - 1;
        ans += (1ll << (n - cntBlack)) - 1;
    }

    cout << ans - n * m;
}