#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;

    while (t--) {
        int n, m, u;
        cin >> n >> m >> u;

        vector<int> a(n), b(m);
        for (int& x : a) cin >> x;
        for (int& y : b) cin >> y;

        auto f = [&](const vector<int>& a, const vector<int>& b) {
            unordered_set<int> s;
            int idx = 0;
            for (int i = 0; i < b.size(); i++) {
                if (idx < a.size() && b[i] == a[idx]) {
                    s.insert(a[idx++]);
                } else if (s.find(b[i]) == s.end()) {
                    return false;
                }
            }
            return true;
        };

        cout << (f(a, b) ? "YA" : "TIDAK") << endl;

        while (u--) {
            int x, y;
            cin >> x >> y;
            b[x - 1] = y;
            cout << (f(a, b) ? "YA" : "TIDAK") << endl;
        }
    }

    return 0;
}
