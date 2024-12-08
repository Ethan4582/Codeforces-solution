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

void solve(){
    ll n, q; 
    cin >> n >> q;
    
    vll a(n);
    rep(i, 0, n) cin >> a[i];

    map<ll, ll> mpp;

    rep(i, 0, n) {

        ll op = (i + 1) * (n - i) - 1;
        mpp[op]++;
        if(i > 0) {
            ll opr = (n - i) * i;
            mpp[opr] += (a[i] - a[i - 1] - 1);
        }
    }

    while(q--) {
        ll s;
        cin >> s;
        if(mpp.find(s) == mpp.end()) {
            cout << 0 << " ";
        } else {
            cout << mpp[s] << " ";
        }
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}



// geneerte the map where store the point for possible line segment 
// possible subaary that conatin is i elment and len > 1

//possible subaary (n-l)* (r-n)- 1 // for the itself subarry 

