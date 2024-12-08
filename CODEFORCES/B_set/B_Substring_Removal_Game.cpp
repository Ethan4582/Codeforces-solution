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
#define sz(a) int((a).size())
#define fuck(i, n) for (int i = 0; i < int(n); ++i)

using namespace std;
    void solve() {
        string s;
        cin >> s;
        vector<int> a;
        fuck(i, sz(s)) if (s[i] == '1') {
            int j = i;
            while (j + 1 < sz(s) && s[j + 1] == '1')
                ++j;
            a.push_back(j - i + 1);
            i = j;
        }
        sort(a.rbegin(), a.rend());
        int ans = 0;
        for (int i = 0; i < sz(a); i += 2)
            ans += a[i];
        cout << ans << endl;
    }

int main() {
    int T;
    cin >> T;
    while (T--) solve();
}


