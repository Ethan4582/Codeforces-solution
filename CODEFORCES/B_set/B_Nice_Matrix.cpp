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

long long cal(vll& currnum) {
    sort(currnum.begin(), currnum.end());
    long long median = currnum[currnum.size() / 2];
    long long operations = 0;
    
    for (long long num : currnum) {
        operations += abs(num - median);
    }
    
    return operations;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vll> mat(n);
    
    for (int i = 0; i < n; ++i) {
        mat[i].resize(m);
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }
 
    long long ans = 0;
 
    int lefrw = 0, rigrow = n - 1;
    while (lefrw <= rigrow) {
        int lefclm = 0, rigclm = m - 1;
        while (lefclm <= rigclm) {
            vll currnum;
            currnum.pb(mat[lefrw][lefclm]);
            
            if (lefrw != rigrow) {
                currnum.pb(mat[rigrow][lefclm]);
            }
            
            if (rigclm != lefclm) {
                currnum.pb(mat[lefrw][rigclm]);
            }
            
            if (lefclm != rigclm && lefrw != rigrow) {
                currnum.pb(mat[rigrow][rigclm]);
            }
            
            ans += cal(currnum);
 
            lefclm++, rigclm--;
        }
 
        lefrw++, rigrow--;
    }
 
    p(ans)
}

int main() {
    fastread()
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}