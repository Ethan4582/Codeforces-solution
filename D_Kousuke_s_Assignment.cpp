#include <bits/stdc++.h>
#define ll long long
#define unordered_map std::unordered_map
#define pb push_back
#define vi std::vector<int>
#define vll std::vector<ll>
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (std::ios_base::sync_with_stdio(false), std::cin.tie(NULL));
using namespace std;

void solve() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vi ar(n);
        rep(i, 0, n) cin >> ar[i];
        
        auto ans = [](const vi& ar2) {
            int count = 0;
            int crst = 0;
            
            auto calc = [](const vi& ar, int srt, int ed) {
                unordered_map<ll, vi> smp;
                ll kp = 0;
                smp[0].pb(srt - 1);
                
                auto check = [&](int idx) {
                    if(smp[kp].size() <= 1) return false;
                    auto& pos = smp[kp];
                    return idx - pos[pos.size() - 2] > 0;
                };
                
                for(int i = srt; i <= ed; ++i) {
                    kp += ar[i];
                    smp[kp].pb(i);
                    if(check(i)) return true;
                }
                return false;
            };
            
            auto check2 = [](const vi& ar, int pos) {
                unordered_map<ll, int> sen{{0, pos - 1}};
                ll ttl = 0;
                for(int i = pos; i < ar.size(); ++i) {
                    ttl += ar[i];
                    if(sen.count(ttl)) return i + 1;
                    sen[ttl] = i;
                }
                return (int)ar.size();
            };
            
            while(crst < ar2.size()) {
                if(calc(ar2, crst, ar2.size() - 1)) {
                    ++count;
                    crst = check2(ar2, crst);
                } else break;
            }
            
            return count;
        };
        
        p(ans(ar));
    }
}

int main() {
    fastread();
    solve();
    return 0;
}