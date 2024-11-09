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
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define p(a) cout << (a) << "\n"
#define fast() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;

using namespace std;

int main() {
    fast();
    int t; 
    cin >> t;
    
    auto gD = [](int n) {
        unordered_map<int, int> s;
        while(n--) {
            int bId, v;
            cin >> bId >> v;
            s[bId] += v;
        }
        return s;
    };
    
    auto tD = [](const auto& d) {
        vi p;
        for(const auto& [_, sum] : d) {
            p.pb(sum);
        }
        return p;
    };
    
    auto cMP = [](vi& p, int s) {
        sort(rall(p));
        int r = 0;
        rep(i, 0, min(s, (int)p.size())) {
            r += p[i];
        }
        return r;
    };
    
    while(t--) {
        int s, n;
        cin >> s >> n;
        
        auto bD = gD(n);
        auto p = tD(bD);
        p(cMP(p, s));
    }
    
    return 0;
}
