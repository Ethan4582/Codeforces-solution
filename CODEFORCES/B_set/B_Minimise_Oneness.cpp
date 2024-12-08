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

using namespace std;

void solve() {
    int n;
    cin >> n;

    auto solc = [&](int len) {
        string result;

        for (int i = 0; i < len; ++i) {
            result += (i == 0) ? '1' : '0';
        }
        return result;
    };

   p(solc(n))
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
