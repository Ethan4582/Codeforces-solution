#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vd vector<dq>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define dq std::deque<char>
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int cnt(const dq &l, const string &t) {
    string s(l.begin(), l.end());
    s += s.substr(0, t.size() - 1);
    int c = 0;
    for (size_t i = 0; i <= s.size() - t.size(); ++i) {
        if (s.substr(i, t.size()) == t) c++;
    }
    return c;
}

void tevtop(dq &cur, const vs &m, int sr, int sc, int ec) {
    for (int j = sc; j <= ec; ++j) cur.pb(m[sr][j]);
}

void tevright(dq &cur, const vs &m, int sr, int kp, int ec) {
    for (int i = sr + 1; i <= kp; ++i) cur.pb(m[i][ec]);
}

void trevbotm(dq &cur, const vs &m, int kp, int sc, int ec) {
    for (int j = ec - 1; j >= sc; --j) cur.pb(m[kp][j]);
}

void travleft(dq &cur, const vs &m, int sr, int kp, int sc) {
    for (int i = kp - 1; i > sr; --i) cur.pb(m[i][sc]);
}

vd ex(int r, int c, const vs &m) {
    vd leyr;
    int sr = 0, kp = r - 1, sc = 0, ec = c - 1;

    while (sr <= kp && sc <= ec) {
        dq cur;

        tevtop(cur, m, sr, sc, ec);
        tevright(cur, m, sr, kp, ec);
        if (sr < kp) trevbotm(cur, m, kp, sc, ec);
        if (sc < ec) travleft(cur, m, sr, kp, sc);

        leyr.pb(cur);
        ++sr; --kp; ++sc; --ec;
    }
    return leyr;
}

int main() {
    fastread();
    int t; cin >> t;
    const string tgt = "1543";
    vi res;

    while (t--) {
        int n, m; cin >> n >> m;
        vs arr(n);
        rep(i, 0, n) cin >> arr[i];

        auto leyr = ex(n, m, arr);
        int total = 0;

        for (const auto &l : leyr) total += cnt(l, tgt);
        res.pb(total);
    }

    for (const auto &r : res) p(r)
    return 0;
}
