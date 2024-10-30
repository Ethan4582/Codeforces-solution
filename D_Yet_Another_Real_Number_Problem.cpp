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
    
    auto valid = [](const int& first, const int& second, const int& swts) {
        return swts > 30 ? true : 
               [](int a, int b, int s) {
                   ll pw = 1LL << s;
                   ll cr = b * pw;
                   return a < cr;
               }(first, second, swts);
    };
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        for(auto& x : a) cin >> x;
        
        const int mod = 1e9 + 7;
        vector<pi> val;
        long long ans = 0;
        vll pw2(n * 32 + 1);
        
        pw2[0] = 1;
        for(int i = 1; i <= n * 32; i++) {
            pw2[i] = pw2[i-1] * 2 % mod;
        }
        
        auto prnt = [&](int num) {
            auto [value, zro] = [&]() {
                int v = num, z = 0;
                for(; !(v & 1); v >>= 1) ++z;
                return make_pair(v, z);
            }();
            
            auto updt = [&]() {
                while(!val.empty() && valid(val.back().first, value, zro)) {
                    ll crrpw = pw2[val.back().second];
                    ll crrval = val.back().first;
                    ll sl = (crrval * crrpw) % mod;
                    
                    ans += mod;
                    ans = ((ans - sl) % mod + crrval) % mod;
                    zro += val.back().second;
                    val.pop_back();
                }
            };
            
            updt();
            val.emplace_back(value, zro);
            ans = (ans + (1LL * value * pw2[zro])) % mod;
            cout << ans << ' ';
        };
        
        for(int i = 0; i < n; i++) {
            prnt(a[i]);
        }
        cout << '\n';
    }
    return 0;
}
