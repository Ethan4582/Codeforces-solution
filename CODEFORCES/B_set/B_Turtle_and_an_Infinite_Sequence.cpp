#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(x) ((int) (x).size())
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vp = vector<pii>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vb = vector<bool>;

 
void solve(){
    int n,m;
    cin >> n >> m;
    int l = max(0, n-m), r = n + m;
 
    int ans = n;
 
    for(int i=0; i<=30; i++){
        if(n&(1<<i)) continue;
 
        int x = (1<<i);
        for(int j=30; j>=0; j--){
            if(j == i) continue;
            if(x + (1<<j) <= r) x += (1<<j);
        }
 
        if(x >= l && x <= r) ans |= (1<<i);
    }
 
    cout << ans << "\n";
 
    return;
}
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}