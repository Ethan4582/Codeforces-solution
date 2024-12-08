#include <bits/stdc++.h>
using namespace std;
#define INF 1e9 + 7

void solve() {
    int n; 
    cin >> n;
    int gMin = INF;
    vector<int> sMins;

    for (int i = 0; i < n; i++) {
        int m; 
        cin >> m;
        vector<int> a(m);
        for (int &x : a) cin >> x;
        int fMin = *min_element(a.begin(), a.end());
        gMin = min(gMin, fMin);
        a.erase(find(a.begin(), a.end(), fMin));
        sMins.push_back(*min_element(a.begin(), a.end()));
    }

    long long res = gMin + accumulate(sMins.begin(), sMins.end(), 0LL) - *min_element(sMins.begin(), sMins.end());
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
