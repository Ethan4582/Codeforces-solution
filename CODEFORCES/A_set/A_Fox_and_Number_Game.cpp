#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

int main() {
    ll n;
    cin >> n;
    
    ll x;
    cin >> x;
    
    for (ll i = 1; i < n; ++i) {
        ll y;
        cin >> y;
        x = gcd(x, y);
    }
    
    cout << n * x << endl;
    return 0;
}
