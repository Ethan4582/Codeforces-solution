

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
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        ll n, a, b;
        cin >> n >> a >> b;
        ll lim = min(a, b);
        ll gk = (n + lim - 1) / lim;
        p(gk);
    }
}



// #include <bits/stdc++.h>
// #define ll long long
// #define pb push_back
// #define vi vector<int>
// #define all(v) v.begin(), v.end()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t;
//     while (t--) {
//         ll n, x, y;
//         cin >> n >> x >> y;
//         ll res = (n + min(x, y) - 1) / min(x, y); // Calculate the minimum time to blend
//         cout << res << "\n";
//     }
//     return 0;
// }
