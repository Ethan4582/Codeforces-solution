#include <bits/stdc++.h>
#define vi vector<int>
#define fast ios::sync_with_stdio(0), cin.tie(0)

using namespace std;

class DSU {
public:
    vi p, b;

    DSU(int n, const string& s) {
        p.resize(n + 1);
        b.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            p[i] = i;
            if (s[i - 1] == '0') b[i] = 1;
        }
    }

    int find(int x) {
        return (p[x] == x) ? x : (p[x] = find(p[x]));
    }

    void unite(int x, int y) {
        int a = find(x), b = find(y);
        if (a != b) {
            p[b] = a;
            this->b[a] += this->b[b];
        }
    }
};

int main() {
    fast;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi k(n + 1);
        for (int i = 1; i <= n; i++) cin >> k[i];
        string s; cin >> s;

        DSU dsu(n, s);
        for (int i = 1; i <= n; i++) dsu.unite(i, k[i]);

        vi res(n + 1);
        for (int i = 1; i <= n; i++) res[i] = dsu.b[dsu.find(i)];

        for (int i = 1; i <= n; i++) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
