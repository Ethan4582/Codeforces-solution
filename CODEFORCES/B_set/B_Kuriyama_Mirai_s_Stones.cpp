#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int n; 
    cin >> n; 
    vll a(n), psum(n + 1), p2sum(n + 1);
    
    rep(i, 0, n) {
        cin >> a[i];
        psum[i + 1] = psum[i] + a[i];
    }

    vll sorted_a = a;
    sort(all(sorted_a));

    rep(i, 0, n) {
        p2sum[i + 1] = p2sum[i] + sorted_a[i];
    }

    int q; 
    cin >> q;
    while (q--) {
        int ty, l, r;  
        cin >> ty >> l >> r;
        
        if (ty == 1) {
            p(psum[r] - psum[l - 1]);
        } else {
            p(p2sum[r] - p2sum[l - 1]);
        }
    }

    return 0;
}
