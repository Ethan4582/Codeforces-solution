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
#define p(a) cout << a << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;
const int N = 1e5 + 5;

using namespace std;
int a[N];
bool c[N];

int main() {
    fastread();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi v(n);
        rep(i, 0, n) cin >> v[i];
        bool f = 1;
        rep(i, 1, n) {
            int d = abs(v[i] - v[i-1]);
            if(d != 5 && d != 7) {
                f = 0;
                break;
            }
        }
        if(f) YES; else NO;
    }
    return 0;
}
