

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


// using namespace std;


// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> w(n);
//         long long s = 0;

//         for (int i = 0; i < n; ++i) {
//             cin >> w[i];
//             s += w[i];
//         }

//         if (n <= 2) {
//             cout << -1 << endl;
//             continue;
//         }

//         sort(w.begin(), w.end());

//         auto chk = [&](int x) {
//             int a = w.back() + x;
//             double avg = static_cast<double>(s + x) / (2 * n);
//             int c = 0;

//             for (const auto& v : w) {
//                 if (v < avg) c++;
//             }
//             return c > n / 2;
//         };

//         int l = 0, r = numeric_limits<int>::max();
//         int b = -1;

//         auto bs = [&]() {
//             while (l <= r) {
//                 int m = l + (r - l) / 2;

//                 if (chk(m)) {
//                     b = m;
//                     r = m - 1;
//                 } else {
//                     l = m + 1;
//                 }
//             }
//         };

//         bs();
//        p(b);
//     }


//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int zz; cin >> zz;
    while (zz--) {
        int qq; cin >> qq;
        vector<int> kox(qq);
        long long ko = 0;
        for (int& ww : kox) { cin >> ww; ko += ww; }

        if (qq <= 2) { cout << "-1\n"; continue; }
        sort(kox.begin(), kox.end());
        auto ff = [&](long long uu) {
            double ako = (ko + uu) / (2.0 * qq);
            return count_if(kox.begin(), kox.end(), [ako](int cko) { return cko < ako; }) > qq / 2;
        };
        long long ll = 0, rr = 1e18, bjo = -1;
        while (ll <= rr) {
            long long nkop = (ll + rr) / 2;
            if (ff(nkop)) { bjo = nkop; rr = nkop - 1; }
            else ll = nkop + 1;
        }
        cout << bjo << '\n';
    }
}