

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

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int h, w;
    cin >> h >> w;

    vector<vi> g(h, vi(w));
    rep(i , 0 , h ) {
       rep(j , 0, w) {
            cin >> g[i][j];
        }
    }
    
    int a, b, p, q;
    cin >>a>>b>>p>> q;

    int m_x,m_y;
    cin >>m_x>>m_y;

    auto vld = [&](int r, int c) -> bool {
        return r>= 0 && c>= 0 && r <h && c<w && !g[r][c];
    }; 
    auto gemov = [&](int m_x, int m_y) {
        return vpii{
            {m_x, m_y},
            {m_y, -m_x},
            {-m_x, -m_y},
            {-m_y, m_x}
        };
    };

    vector<vector<bool>> sen(h, vector<bool>(w, false));     queue<tuple<int, int, int>> dq;
    dq.emplace(a, b, 0);
    sen[a][b] = true;

    while(!dq.empty()) {
        auto crr = dq.front();

        dq.pop();

        int cr = get<0>(crr);
        int cc = get<1>(crr);
        int cs = get<2>(crr);

        if(cr == p && cc == q) {
            cout << cs;
            return 0;
        }
        auto mvs = gemov(m_x, m_y);

        for(const auto& mv : mvs) {
            int nr = cr+ mv.first; 
            int  nc = cc + mv.second; 
            if(vld(nr, nc) && !sen[nr][nc]) {
                sen[nr][nc] = true;
                dq.emplace(nr, nc, cs + 1);
            }
        }
    }

    cout << -1; 
    return 0;
}
