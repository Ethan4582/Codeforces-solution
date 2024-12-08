

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

void solve() {
    int n; 
    cin >> n; 
    vi b(n - 1); 
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> b[i]; 
    }

    vi a;
    a.pb(b[0]);
    rep(i, 1, n - 1) {
        a.pb(b[i - 1] | b[i]);
    }
    a.pb(b[n - 2]);

    bool valid = true;
    rep(i, 0, n - 1) {
        if ((a[i] & a[i + 1]) != b[i]) {
            valid = false;
            break;
        }
    }

    if (valid) {
        rep(i, 0, n) { 
            cout << a[i] << " ";
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t; 
    while(t--) {
        solve();
    }
    return 0;
}

