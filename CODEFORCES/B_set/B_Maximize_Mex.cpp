


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
const int N = 200200; 

using namespace std;

int vls[N], frq[N], cntf[N]; 

int solve(){
    int n, b;
        cin >> n >> b;

        fill(frq, frq + n + 2, 0);
        fill(cntf, cntf + n + 2, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> vls[i];
            if (vls[i] <= n) {
                frq[vls[i]]++;
            }
        }
        sort(vls + 1, vls + n + 1);
        auto check = [&]() {
            if (b > n) {
                int MEX = 0;
                for (int i = 1; i <= n;) {
                    if (vls[i] != MEX) break;
                    while (i <= n && vls[i] == MEX) ++i;
                    // while ( vls[i] == MEX) ++i;
                    ++MEX;
                }
                p(MEX);
                return;
            }

            for (int i = 0; i <= n; ++i) {
                cntf[i % b] += frq[i];
                if (cntf[i % b] == 0) {
                    p(i);
                    return;
                }  --cntf[i % b];
            }
        };

        check();
    
}
int main() {
    fastread();
    int t; 
    cin >> t; 
    while(t--) {
      solve();
    }
    return 0;
}
