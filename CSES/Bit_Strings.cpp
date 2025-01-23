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

const ll mod = 1e9 + 7; // Define mod value
const int N = 1e5 + 5; 

using namespace std;

ll power(ll n, ll p, ll mod) {
    ll ans = 1;
    rep(i, 0, n) { 
        ans = (ans * (p % mod)) % mod; 
    }
    return ans; 
}

ll powMod(ll a, ll b) { 
    ll x = 1; 
    while (b > 0) { 
        if (b & 1) // If b is odd
            x = (x * a) % mod; // Multiply x by a and take mod
        a = (a * a) % mod; 
        b >>= 1; // Divide b by 2
    } 
    return x; // Return the final res
}

int main() {
    fastread();
    int t; 
    cin >> t; 
   //  ll res = powMod(t, 2); 
   ll res = power(t, 2, mod); 
    p(res); 
    return 0;
}














