#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define forn(i, x, n) for (int i = x; i < n; i++)
#define vi vector<int>
#define vpp vector<pair<int,int>>
#define vs vector<string>
#define vll vector<long long>
#define ss second
#define ff first
int row[] = {1,0,-1,0};
int col[] = {0,1,0,-1};
const int mod = 1e9 + 7;


void solve(){  

    int a, b;
    cin >> a >> b;
    

    vi s(a);
    for (int i = 0; i < a; ++i) {
        cin >> s[i];
    }
    
    vi c(a + 1, 1);
    for (int i : s) {
        c[i] = 0;
    }
    for(int i = 0; i < a + 1; ++i) {
        if(c[i] == 1) {
            s.push_back(i);
            break;
        }
    }
    int d = (b * a) % (a + 1);
    vi ans;
    
    for(int i = 0; i < a; ++i) {
        ans.pb(s[d]);
        d = (d + 1) % (a + 1);
    }
    for(int i = 0; i < a; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
}



signed main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;

}
