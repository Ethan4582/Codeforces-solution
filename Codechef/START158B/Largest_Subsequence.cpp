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
#define rep(i, a, n) for (int i = a; i < n; i++)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

void solve() {
    int n; 
    string a; 
    cin >> n >> a;

    int ans = 0; 
    rep(i , 0 , n) { 
        ans = max(ans, (a[i] == a[0]) ? (i + 1) : (a[i] == a[n - 1] ? (n - i) : ans));
    }

    cout << ans << "\n"; 
}

int main() {
    fastread(); 
    int t; 
    cin >> t; 
    while (t--) 
        solve(); 
    return 0; 
}
