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

// ps[r]=ps[j-1] + pwK


void solve() {
    int N, k;
    cin >> N >> k;
    ll x[N + 1];
    x[0] = 0;
    rep(i, 0, N) cin >> x[i + 1];
    partial_sum(x, x + N + 1, x);

    
// If k=1: It checks how many times x[i] + 1 has been seen.
// k=-1: It checks for both x[i] + 1 and x[i] - 1.
// For other values of k: It checks for powers of k (likek^0,k^1,k2) added to the cumulative sums.
    
    if (k == 1) {
        ll ans = 0;
        map<ll, int> mpp;
        for (int i = N; i >= 0; i--) {
            if (mpp.find(x[i] + 1) != mpp.end())
                ans += mpp[x[i] + 1];
            mpp[x[i]]++;
        }
        cout << ans << "\n";
    } else if (k == -1) {
        ll ans = 0;
        map<ll, int> mpp;
        for (int i = N; i >= 0; i--) {
            if (mpp.find(x[i] + 1) != mpp.end())
                ans += mpp[x[i] + 1];
            if (mpp.find(x[i] - 1) != mpp.end())
                ans += mpp[x[i] - 1];

            mpp[x[i]]++;
        }
        cout << ans << "\n";
    } else {
        ll ans = 0;
        map<ll, int> mpp;
        for (int i = N; i >= 0; i--) {
            ll cur = 1;
            while (true) {
                if (abs(cur) >= 1e15) break;
                if (mpp.find(x[i] + cur) != mpp.end())
                    ans += mpp[x[i] + cur];
                cur *= k;
            }
            mpp[x[i]]++;
        }
        p(ans)
    }
}

int main() {
    int t = 1; 
    while (t--) {
        solve();
    }
    return 0;
}
