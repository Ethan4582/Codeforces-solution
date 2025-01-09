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

ll check(vll &a, ll x) {
    ll n = a.size();
    ll s = accumulate(all(a), 0LL); 
    ll j = 0, ans = 0;


    for (ll i = n - 1; i >= 0; --i) {
        while (j < n && s - a[i] - a[j] >= x) {
            j++;
        }
        ans += (n - j);
    }

    // i == j
    for (ll i = 0; i < n; ++i) {
        if (s - a[i] - a[i] < x) {
            ans--;
        }
    }


    return ans / 2;
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        vll a(n);
        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(all(a)); 
        p(check(a, y + 1) - check(a, x) )
    }
    return 0;
}
