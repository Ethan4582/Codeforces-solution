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
        cin >> n; 
     
        vll a(n);
        rep(i, 0, n) cin >> a[i];
        
        vll b(n);
        rep(i, 0, n) cin >> b[i];

        ll x1 = 0, x2 = 0, c1 = 0, c2 = 0;

        rep(i, 0, n) {
            if (a[i] > b[i]) {
                x1 += a[i];
            } else if (a[i] < b[i]) {
                x2 += b[i];
            } else if (a[i] == 1) {
                c1++;
            } else if (a[i] == -1) {
                c2++;
            }
        }

        while (c1--) {
            if (x1 < x2) x1++;
            else x2++;
        }

        while (c2--) {
            if (x1 > x2) x1--;
            else x2--;
        }

        cout << min(x1, x2) << '\n';
    }

    return 0;
}
