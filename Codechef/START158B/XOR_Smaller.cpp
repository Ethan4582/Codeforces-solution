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

int a[N]; 
bool c[N]; 

ll solv(const vi & arr) {
    int n = arr.size();
    vi cnt(31, 0);

    auto cntbit = [&](int vl) {
        auto dcnt = [&](int i) { cnt[i] += (vl >> i) & 1; };
        rep(i, 0, 31) dcnt(i);
    };
    for_each(all(arr), cntbit);

    ll ans = 0;
    auto res = [&](int i) { ans |= ((cnt[i] == n) << i); };
    rep(i, 0, 31) res(i);

    return ans;
}

int main() {
    fastread();
    int t; 
    cin >> t; 
    while(t--) {
        int n; 
        cin >> n; 

        vi a(n);
        for_each(all(a), [&](int &x) { cin >> x; });

        ll res = solv(a);
        p(res);
    }
    return 0;
}
