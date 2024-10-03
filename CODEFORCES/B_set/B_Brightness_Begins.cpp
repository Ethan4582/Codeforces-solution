
// // #include<bits/stdc++.h>
// // using namespace std;

// // void solve() {
// //   long long n; cin >> n;
// //   long long l = 1, rg = 2e18, ans = 0;
// //   while(l <= rg) {
// //     long long mid = (l + rg) / 2;
// //     long long t = sqrt(mid);
// //     while(t * t > mid) t--;
// //     while((t + 1) * (t + 1) <= mid) t++;

// //     long long cnt = mid - t;
// //     if(cnt >= n) {
// //       ans = mid;
// //       rg = mid - 1;
// //     } else {
// //       l = mid + 1;
// //     }
// //   }
// //   cout << ans << '\n';
// // }

// // int main() {
// //   int t; cin >> t;
// //   while(t--) {
// //     solve();
// //   }
// // }


// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int q;
// //     cin >> q;
// //     auto f = [&]() {
// //         long long x, y = 1, z = 2e18, w = 0;
// //         cin >> x;
// //         auto g = [](long long md) {
// //             long long s = sqrt(md);
// //             while(s * s > md) s--;
// //             while((s + 1) * (s + 1) <= md) s++;
// //             return md - s;
// //         };
// //         while(y <= z) {
// //             long long md = (y + z) / 2;
// //             if(g(md) >= x) {
// //                 w = md;
// //                 z = md - 1;
// //             } else {
// //                 y = md + 1;
// //             }
// //         }
// //         cout << w << '\n';
// //     };
// //     while(q--) f();
// //     return 0;
// // }



// int main() {
//     int q;
//     cin >> q;
//     while(q--) {
//         long long x, a = 1, bg = 9e18, rg = 0;
//         cin >> x;
//         auto f = [](long long md) {
//             long long s = 0, e = 3e9;
//             while (s < e) {
//                 long long k = s + (e - s + 1) / 2;
//                 if (k * k <= md) s = k;
//                 else e = k - 1;
//             }
//             return md - s;
//         };
//         while (a <= bg) {
//             long long md = (a + bg) / 2;
//             if (f(md) >= x) rg = md, bg = md - 1;
//             else a = md + 1;
//         }
//         p(rg)
//     }
// }

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";

const ll mod = 1e9 + 7;
using namespace std;


int main() {
    int q;
    cin >> q;

    auto mxk = [](ll md) {
         ll s = 0, e = 3e9;
        while (s < e) {
            ll k = s + (e - s + 1) / 2;
            if (k * k <= md) 
                s = k;
            else 
                e = k - 1;
        }
        return s; 
    };

   
    auto df = [&](ll  md) {
        return md - mxk(md);
    };

    while (q--) {
        ll x, a = 1, bg = 9e18, rg = 0;
        cin >> x;

        while (a <= bg) {
            ll  md = (a + bg) / 2;
            if (df(md) >= x) {
                rg = md;
                bg = md - 1;
            } else {
                a = md + 1;
            }
        }
      p( rg);
    }

    return 0;
}
