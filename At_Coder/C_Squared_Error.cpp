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

using namespace std;


ll ans(const vll &a) {
    ll sum = 0;
    int n = a.size();
    rep(i, 0, n) {
        rep(j, i + 1, n) {
            sum += (a[i] - a[j]) * (a[i] - a[j]); 
        }
    }
    return sum;
}

int solve() {
    int n; 
    cin >> n;
    vll a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }
    p(ans(a)); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1; 
    while (t--) {
        solve();
    }
    return 0;
}
