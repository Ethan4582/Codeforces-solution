

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
    ll c, d;
    cin >> n >> c >> d;
    vll a(n * n);
    for (int i = 0; i < n * n; ++i) {
        cin >> a[i];
    }
    sort(all(a));
    vll b(n * n);
    b[0] = a[0];
    for (int i = 1; i < n; ++i) {
        b[i] = b[i - 1] + c;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i * n + j] = b[(i - 1) * n + j] + d;
        }
    }
    sort(all(b));
    cout << (a == b ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
