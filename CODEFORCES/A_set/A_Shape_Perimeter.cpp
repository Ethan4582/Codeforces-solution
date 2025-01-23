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
int a[N]; 
bool c[N]; 

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<int> xs, ys;
        xs.insert(0);
        ys.insert(0);
        vi mvx(n), mvy(n);
        int crrx = 0, ccy = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> mvx[i] >> mvy[i];
            crrx += mvx[i];
            ccy += mvy[i];
            xs.insert(crrx),  xs.insert(crrx + m), ys.insert(ccy), ys.insert(ccy + m);
        }
        
        vi arx(all(xs));
        vi arev(all(ys));
        int rw = arev.size();
        int clm = arx.size();
        vector<vector<bool>> gd(rw, vector<bool>(clm, false));
        
        crrx = ccy = 0;
        for (int i = 0; i < n; i++) {
            crrx += mvx[i];
            ccy += mvy[i];
            int x1 = lower_bound(all(arx), crrx) - arx.begin();
            int y1 = lower_bound(all(arev), ccy) - arev.begin();
            int x2 = lower_bound(all(arx), crrx + m) - arx.begin();
            int y2 = lower_bound(all(arev), ccy + m) - arev.begin();
            
            for (int y = y1; y < y2; y++) {
                for (int x = x1; x < x2; x++) {
                    gd[y][x] = true;
                }
            }
        }
        
        ll cumm = 0;
        for (int i = 0; i < rw - 1; i++) {
            for (int j = 0; j < clm - 1; j++) {
                if (gd[i][j]) {
                    if (!gd[i+1][j]) cumm += arx[j+1] - arx[j];
                    if (!gd[i-1][j] && i > 0) cumm += arx[j+1] - arx[j];
                    if (!gd[i][j+1]) cumm += arev[i+1] - arev[i];
                    if (!gd[i][j-1] && j > 0) cumm += arev[i+1] - arev[i];
                }
            }
        }
        
      p(cumm )
    }
    return 0;
}