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

int gcd(ll a, ll b) {
    if (a == 0) return b; 
    return gcd(b % a, a); 
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

       
          auto it = partition(a.begin(), a.end(), [](ll x) {
            return x % 2 == 0; 
        });

        int ans = 0; 
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                ans += gcd(a[i], a[j] * 2) > 1; 
            }
        }
        
        p(ans); 
    }
    return 0;
}
