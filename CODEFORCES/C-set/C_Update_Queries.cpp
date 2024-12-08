#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define rv return void
#define int ll
#define nl '\n'



void solve() {
    int n, m;
    cin >> n >> m;
    string s, s2;
    cin >> s;
    vector<int> a(m);
    set<int> st;
    for (int i = 0; i < m; i++) cin >> a[i], st.insert(a[i]);
    cin >> s2;
    sort(all(s2));
    int j = 0;
    for (auto i: st) {
        s[i - 1] = s2[j++];
    }
    cout << s << nl;
}

signed main() {

    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
