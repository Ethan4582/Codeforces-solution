#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void solve() {
    ll n, ev = 0, oddCost = 0;
    cin >> n;
    vll frequency(n + 1, 0);
    
   
    rep(i, 0, n / 2) {
        ll in;
        cin >> in;
        frequency[in]++;
    }
    
    vll k;
    vll me;
    
  
    rep(i, 1, n + 1) {
        if (frequency[i] == 0) {
            if (i % 2 == 1) {
                k.pb(i);
            } else {
                me.pb(i);
            }
        }
    }
    
   
    sort(k.rbegin(), k.rend());
    sort(me.rbegin(), me.rend());
    
  
    rep(i, 1, n + 1) {
        if (frequency[i] == 1) {
            if (i % 2 == 1) {
                ev += abs(me.back() - i);
                me.pop_back();
            } else {
                oddCost += abs(k.back() - i);
                k.pop_back();
            }
        }
    }
    
  
    cout << min(ev, oddCost) << "\n";
}

int main() {
    fastio;
    ll t = 1;
    
    while (t--) {
        solve();
    }
    return 0;
}
