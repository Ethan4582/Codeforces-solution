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
    int t; 
    cin >> t; 
    while (t--) { 
        vll a(4);
        rep(i, 0, 4) { 
            cin >> a[i];
        }

        int f1 = max(a[0], a[1]); 
        int f2 = max(a[2], a[3]); 
      
        int mn = min(f1, f2);
        ll mx = LLONG_MIN; 
        for (int i = 0; i < 4; ++i) {
            if (a[i] != f1 && a[i] != f2) {
                mx = max(mx, a[i]); 
            }
        }
        if (mx > mn) {
            NO;
        } else {
            YES;
        }
    }
    return 0;
}
