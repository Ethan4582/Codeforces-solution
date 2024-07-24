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

const ll mod = 1e9 + 7;

using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    
    vector<set<int>> likes(n);
    
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            likes[i].insert(x);
        }
    }
    
    int common = 0;
    for (int i = 1; i <= m; i++) {
        bool liked_by_all = true;
        for (int j = 0; j < n; j++) {
            if (likes[j].find(i) == likes[j].end()) {
                liked_by_all = false;
                break;
            }
        }
        if (liked_by_all) {
            common++;
        }
    }
    
    return common;
}

int main() {
    int ans = solve();
    p(ans);
    return 0;
}
