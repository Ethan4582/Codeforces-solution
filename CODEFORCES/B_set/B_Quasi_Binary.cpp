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
    int n;
    cin >> n;
    vi q;
    auto f = [](int x) {
      //genratint themax posible 101 number and subatract 
        int r = 0, b = 1;
        while (x) {
            if (x % 10) r += b;
            x /= 10;
            b *= 10;
        }
        return r;
    };
    while (n) {
        int m = f(n);
        q.pb(m);
        n -= m;
    }
    p(q.size());
    sort(all(q));
    for (int x : q) cout << x << " ";
    cout << "\n";
    return 0;
}