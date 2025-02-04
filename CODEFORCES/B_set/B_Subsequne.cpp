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

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    l--, r--; 

          vll a(n);
          rep( i ,0 ,n){cin>>a[i];}

    vll b(a.begin() + l, a.end()); 
    vll c(a.begin(), a.begin() + r + 1); 
  
    sort(all(b));
    sort(all(c));

   
    ll sm1 = accumulate(b.begin(), b.begin() + (r - l + 1), 0LL);
    ll sm2 = accumulate(c.begin(), c.begin() + (r - l + 1), 0LL);

 
   p( min(sm1, sm2))
}

int main() {
   fastread();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}