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
#define YES cout << "Yes\n";
#define NO cout << "No\n";

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
        string s;
        cin >> n >> s;
        int k = sqrt(n);
        if (k * k != n) {
            NO
            continue;
        }
        bool ok = s[0] == '1' && s[k-1] == '1' && s[n-k] == '1' && s[n-1] == '1';
        rep(i, 1, k-1) {
            if (s[i*k] != '1' || s[i*k+k-1] != '1') {
                ok = false;
                break;
            }
            rep(j, 1, k-1) {
                if (s[i*k+j] != '0') {
                    ok = false;
                    break;
                }
            }
            if (!ok) break;
        }
        if (ok) YES else NO
    }
    return 0;
}
