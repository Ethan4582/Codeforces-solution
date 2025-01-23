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
 
int main() {
    fastread();
    ll n, ans = 0; 
    cin >> n;
 
    //n/k + n/k^2 ....
    for (ll i = 5; n/i>=1; i *= 5) {
        ans += n / i;  // Count how many multiples of i are in n
    }
 
    p(ans);
   
    return 0;
