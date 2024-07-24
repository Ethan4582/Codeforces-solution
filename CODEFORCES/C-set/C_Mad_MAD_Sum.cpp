#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int Madi(map<int, int>& freq_map) {
    int max_freq = 0;
    int ans = -1; 

    for (auto it : freq_map) {
        if (it.second > max_freq) {
            max_freq = it.second;
            ans = it.first; 
        }
    }
    return ans; 
}

void Madmax(int n) {
    fill(c, c + N, false); 
    int maxu = 0; 
    rep(i,1,n+1) {
        if (c[a[i]])
            maxu = max(maxu, a[i]);
        c[a[i]] = true;
        a[i] = maxu;
    }
}

void solv() {
    int n; 
    cin >> n; 
    rep(i,1,n+1)
        cin >> a[i];

    ll ans = 0;
    rep(i,1,n+1)
        ans += a[i];
    
    Madmax(n); 
    rep(i,1,n+1)
        ans += a[i];
    
    Madmax(n); 
    
    rep(i,1,n+1)
        ans += (n - i + 1) * 1LL * a[i];
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solv();
    }
    return 0;
}







