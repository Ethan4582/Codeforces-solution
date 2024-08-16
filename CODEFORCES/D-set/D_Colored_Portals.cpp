// // #include <bits/stdc++.h>
// // using namespace std;

// // const int N = 2e5 + 10;
// // const int inf = 1e9;

// // int n, q, val[N], prv[N][16], nxt[N][16];

// // void solve() {
// //     cin >> n >> q;
// //     auto id  = [](char c) {
// //         if (c == 'B') return 0;
// //         if (c == 'G') return 1;
// //         if (c == 'R') return 2;
// //         return 3;
// //     };
    
// //     for (int i = 1; i <= n; i++) {
// //         string s; 
// //         cin >> s;
// //         val[i] = (1 << id (s[0])) | (1 << id (s[1]));
// //     }
    
// //     for (int i = 0; i < 16; i++) prv[0][i] = nxt[n + 1][i] = 0;
    
// //     for (int i = 1; i <= n; i++) {
// //         for (int j = 0; j < 16; j++) prv[i][j] = prv[i - 1][j];
// //         prv[i][val[i]] = i;
// //     }
    
// //     for (int i = n; i >= 1; i--) {
// //         for (int j = 0; j < 16; j++) nxt[i][j] = nxt[i + 1][j];
// //         nxt[i][val[i]] = i;
// //     }
    
// //     while (q--) {
// //         int x, y; 
// //         cin >> x >> y;
// //         if (x > y) swap(x, y);
// //         if (x == y) {
// //             cout << "0\n";
// //             continue;
// //         }
// //         if (val[x] & val[y]) {
// //             cout << y - x << '\n';
// //         } else {
// //             int res = inf;
// //             for (int i = 0; i < 4; i++) if (val[x] >> i & 1) {
// //                 for (int j = 0; j < 4; j++) if (val[y] >> j & 1) {
// //                     int mask = (1 << i) | (1 << j);
// //                     if (prv[x][mask]) res = min(res, abs(x - prv[x][mask]) + abs(y - prv[x][mask]));
// //                     if (nxt[x][mask]) res = min(res, abs(nxt[x][mask] - x) + abs(nxt[x][mask] - y));
// //                 }
// //             }
// //             if (res == inf) res = -1;
// //             cout << res << '\n';
// //         }
// //     }
// // }

// // int main() {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     int t = 1;
// //     cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 2e5 + 10;
// const int inf = 1e9;

// using namespace std;

// int n, q, vlu[N], pr[N][16], nsp[N][16];

// void solve() {
//     cin >> n >> q;
//     auto id = [](char c) {
//         if (c == 'B') return 0;
//         if (c == 'G') return 1;
//         if (c == 'R') return 2;
//         return 3;
//     };

//     for (int i = 1; i <= n; i++) {
//         string s; 
//         cin >> s;
//         vlu[i] = (1 << id(s[0])) | (1 << id(s[1]));
//     }

//     for (int i = 0; i < 16; i++) pr[0][i] = nsp[n + 1][i] = 0;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < 16; j++) pr[i][j] = pr[i - 1][j];
//         pr[i][vlu[i]] = i;
//     }

//     for (int i = n; i >= 1; i--) {
//         for (int j = 0; j < 16; j++) nsp[i][j] = nsp[i + 1][j];
//         nsp[i][vlu[i]] = i;
//     }

//     while (q--) {
//         int x, y; 
//         cin >> x >> y;
//         if (x > y) swap(x, y);
//         if (x == y) {
//             p(0);
//             continue;
//         }
//         if (vlu[x] & vlu[y]) {
//             p(y - x);
//         } else {
//             int res = inf;
//             for (int i = 0; i < 4; i++) if (vlu[x] >> i & 1) {
//                 for (int j = 0; j < 4; j++) if (vlu[y] >> j & 1) {
//                     int mask = (1 << i) | (1 << j);
//                     if (pr[x][mask]) res = min(res, abs(x - pr[x][mask]) + abs(y - pr[x][mask]));
//                     if (nsp[x][mask]) res = min(res, abs(nsp[x][mask] - x) + abs(nsp[x][mask] - y));
//                 }
//             }
//             if (res == inf) res = -1;
//             p(res);
//         }
//     }
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }




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
vector<string> vec = {"BG", "BR", "BY", "GR", "GY", "RY"};

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
          int n, q;
    cin >> n >> q;
    vector<string> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> mp(6);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == "BG")
            mp[0].push_back(i);
        if (a[i] == "BR")
            mp[1].push_back(i);
        if (a[i] == "BY")
            mp[2].push_back(i);
        if (a[i] == "GR")
            mp[3].push_back(i);
        if (a[i] == "GY")
            mp[4].push_back(i);
        if (a[i] == "RY")
            mp[5].push_back(i);
    }
 
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        i--;
        j--;
        set<char> stt;
        for (auto ch : a[j])
            stt.insert(ch);
        for (auto ch : a[i])
            stt.insert(ch);
        if (stt.size() < 4)
        {
            cout << abs(i - j) << '\n';
            continue;
        }
        if (j < i)
            swap(i, j);
        int l = -1, r = n;
        for (int k = 0; k < 6; k++)
        {
            string str = vec[k];
            if (str == a[i] || str == a[j])
                continue;
            auto it = lower_bound(mp[k].begin(), mp[k].end(), i);
            if (it != mp[k].begin())
            {
                it--;
                l = max(l, *it);
            }
 
            it = upper_bound(mp[k].begin(), mp[k].end(), i);
            if (it != mp[k].end())
            {
                r = min(r, *it);
            }
        }
        if (l == -1 && r == n)
        {
            cout << "-1\n";
        }
        else if (l == -1)
        {
            cout << abs(i - r) + abs(j - r) << '\n';
        }
        else if (r == n)
        {
            cout << abs(i - l) + abs(j - l) << '\n';
        }
        else
        {
            int ans = min(abs(i - l) + abs(j - l), abs(i - r) + abs(j - r));
            cout << ans << '\n';
        }
    }
   
  }
    return 0;
}