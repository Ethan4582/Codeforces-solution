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

using namespace std ; 


const ll mod = 1e9 + 7;

void solve() {
    string s; 
    cin >> s;
    int n = s.size();
    
    if (n == 1 || s[0] != '1' || s[n - 1] == '9') {
        cout << "NO\n";
        return;
    }
    
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == '0') {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
}

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
