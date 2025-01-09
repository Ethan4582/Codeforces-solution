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

ll updatecurr(vll a) {
    ll curr = a[0]; 
    int n = a.size();
    
    rep(i, 1, n) { 
      // base case if 0 / a[i]  > is muiltip of * aa[i]   thus curr/a[i] +1  * a[i]>  is muiltiple and  close to next to a[i]
      curr= (curr/a[i]+1)*a[i];
    }
    return curr; 
}

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        vll a(n);
        rep(i, 0, n) {
            cin >> a[i];
        }

        ll curr = updatecurr(a); 
        p(curr);
    }
    return 0;
}
