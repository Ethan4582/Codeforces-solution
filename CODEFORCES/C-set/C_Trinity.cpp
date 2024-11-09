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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n);
        rep(i, 0, n) cin >> a[i];
        
        auto svol1 = [&]() {
            auto solv = [](vll& arr) {
                sort(all(arr));
                return arr;
            };
            
            auto ckvalid = [](const vll& srarr, int mid) -> bool {
                for (int i = 0; i + mid - 1 < srarr.size(); ++i) {
                    if (srarr[i] + srarr[i + 1] > srarr[i + mid - 1]) {
                        return true;
                    }
                }
                return false;
            };
            
            auto bsrch = [&](const vll& srarr) {
                int ans = n;
                int l = 1, r = n;
                while (l <= r) {
                    int mid = l + (r - l) / 2;
                    if (mid == 1) {
                        ans = min(ans, n - 1);
                        l = mid + 1;
                        continue;
                    }
                    
                    bool vld = ckvalid(srarr, mid);
                    
                    if (vld) {
                        ans = min(ans, n - mid);
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }
                
                return ans;
            };
            
            return bsrch(solv(a));
        };
        
        p(svol1() )
    }
    return 0;
}

