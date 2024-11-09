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
#define p(a) cout << (a) << "\n" 
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 
using namespace std;

int main() {
    fastread();
    
    int x = 0;  string w;int m;
    
    auto pk1 = [&](int i) -> int {
        if (i < 1 || i + 3 > m) 
            return 0;
        const string p = "1100";
        int r = 1;
        rep(j, 0, 4)
            r &= (w[i + j] == p[j]);
        return r;
    };
    
    auto f2 = [&]() {
        w = "." + w;  x = 0;
        rep(i, 1, m + 1)
            x += pk1(i);     
        int k;
        cin >> k;
        
        auto f3 = [&]() {
            int ps;
            char v;
            cin >> ps >> v;
            rep(j, ps - 4, ps + 1)   x -= pk1(j);
            w[ps] = v;
            rep(j, ps - 4, ps + 1)   x += pk1(j);
            p(x ? "YES" : "NO");
        };
        
        while(k--)
            f3();
    };
    
    int t;
    cin >> t;
    while(t--) {
        cin >> w;
        m = w.length();
        f2();
    }
    
    return 0;
}
