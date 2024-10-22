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
// const int N = 1e5 + 5; 
// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vi v(n);
//         rep(i, 0, n) cin >> v[i];
        
//         auto solve = [&]() -> int {
//             if (n == 1) {
//                 return 0;
//             }
//             sort(all(v));
//             int temp = v[n - 1];
//             for (int i = n - 1; i > 0; i--) {
//                 v[i] = v[i - 1];
//             }
//             v[0] = temp;
//             vi b(n), c(n);
//             b[0] = v[0];
//             c[0] = v[0];
//             rep(i, 1, n) {
//                 b[i] = min(b[i - 1], v[i]);
//                 c[i] = max(c[i - 1], v[i]);
//             }
//             int ans = 0;
//             rep(i, 0, n) {
//                 ans += (c[i] - b[i]);
//             }
//             return ans;
//         };
        
//         p(solve());
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int mini = 1e9;
//         int maxi = -1;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             mini = min(mini, x);
//             maxi = max(maxi, x);
//         }
//         cout << (maxi - mini) * (n - 1) << endl;
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
#define p(a) cout << a << "\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 
using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;

    auto solve = [&]() {
        int k;        cin >> k;
        vi ar(k);
        rep(i, 0, k) cin >> ar[i];

        auto [mn, mx] = minmax_element(all(ar));
        
        ll res = static_cast<ll>(*mx - *mn) * (k - 1);
        p(res);
    };

    rep(_, 0, t) {
        solve();
    }

    return 0;
}


