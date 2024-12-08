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

int32_t main() {
    fastread();
    ll t;
    cin >> t;
    
    auto test = [&]() {
        ll n, k;
        cin >> n >> k;
        
        auto red = [&]() -> vll {
            vll arr(n);
            for(auto &x: arr) cin >> x;
            arr.push_back(0);
            sort(all(arr));
            return arr;
        };
        
        auto solv = [&](const vll& arr) -> ll {
            ll res = 0, tt = 0;
            ll crridx = 1;
            
            auto check = [&]() {
                ll avl = (n - crridx + 1) * 
                             (arr[crridx] - arr[crridx - 1]);
                
                if(tt + avl < k) {
                    res += (n - crridx + 1) * 
                             (arr[crridx] - arr[crridx - 1]);
                    tt += avl;
                    res++;  crridx++;
                    return true;
                }
                return false;
            };
            
            while(tt < k) {
                if(!check()) {
                    res += k - tt;
                    tt = k;
                }
            }
            
            return res;
        };
        
        vll iv = red();
        ll ans = solv(iv);
        p(ans);
    };
    
    while(t--) test();
    
    return 0;
}