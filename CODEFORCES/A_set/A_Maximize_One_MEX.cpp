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

    auto solve = [&]() {
        int n, k;
        cin >> n >> k;
        vi a(n);
        rep(i, 0, n) cin >> a[i];

        auto comp = [&](vi& arr) -> vi {
            vi pre(n + 1, 0);
            vi f(n);
            int mex = 0;
            rep(i, 0, n) {
                pre[arr[i]] = 1;
                while (mex <= n && pre[mex]) mex++;
                f[i] = mex;
            }
            return f;
        };

        auto larg = [&](vi f) {
            sort(rall(f));
            return f[k - 1];
        };

        vi base_f = comp(a);
        int best = larg(base_f);
        int bi = -1, bj = -1;

        rep(i, 0, n) {
            rep(j, i + 1, n) {
                swap(a[i], a[j]);
                vi f = comp(a);
                int cur = larg(f);
                if (cur > best) {
                    best = cur;
                    bi = i + 1;
                    bj = j + 1;
                }
                swap(a[i], a[j]);
            }
        }

        if (bi == -1) p(-1)
        else cout << bi << " " << bj << "\n";
    };

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}