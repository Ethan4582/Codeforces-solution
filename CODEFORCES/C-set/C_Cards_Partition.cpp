// // // #include <bits/stdc++.h>
// // // #define ll long long
// // // #define ull unsigned long long
// // // #define pb push_back
// // // #define vi vector<int>
// // // #define vll vector<ll>
// // // #define all(v) v.begin(), v.end()
// // // #define rall(v) v.rbegin(), v.rend()
// // // #define rep(i, a, n) for (ll i = a; i < n; ++i)
// // // #define p(a) cout << a << "\n";
// // // #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
// // // const ll mod = 1e9 + 7;
// // // using namespace std;

// // // void solve() {
// // //     ll n, cn;
// // //     cin >> n >> cn;
// // //     vll vla(n);
    
// // //     auto input = [&]() {
// // //         for (auto &v : vla) cin >> v;
// // //     };
    
// // //     auto fidmx = [&]() {
// // //         return *max_element(all(vla));
// // //     };
    
// // //     auto cuall = [&]() {
// // //         return accumulate(all(vla), 0LL);
// // //     };
    
// // //     auto check = [&](ll i, ll ttl, ll msxval) {
// // //         ll q = (ttl + cn) / i;
// // //         return (q * i > ttl - 1) && (q > msxval - 1);
// // //     };
    
// // //     input();
// // //     ll msxval = fidmx();
// // //     ll ttl = cuall();
    
// // //     for (ll i = n; i > 0; --i) {
// // //         if (check(i, ttl, msxval)) {
// // //             p(i);
// // //             return;
// // //         }
// // //     }
// // // }

// // // int main() {
// // //     fastread();
// // //     ll t;
// // //     cin >> t;
// // //     while (t--) solve();
// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // #define ll long long
// // #define ull unsigned long long
// // #define pb push_back
// // #define vi vector<int>
// // #define vll vector<ll>
// // #define all(v) v.begin(), v.end()
// // #define rall(v) v.rbegin(), v.rend()
// // #define rep(i, a, n) for (ll i = a; i < n; ++i)
// // #define p(a) cout << a << "\n";
// // #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
// // const ll mod = 1e9 + 7;
// // using namespace std;

// // void solve() {
// //     ll n, cn;
// //     cin >> n >> cn;
// //     vll vla(n);
    
// //     auto input = [&]() {
// //         for (auto &v : vla) cin >> v;
// //     };
    
// //     auto fidmx = [&]() {
// //         return *max_element(all(vla));
// //     };
    
// //     auto cuall = [&]() {
// //         return accumulate(all(vla), 0LL);
// //     };
    
// //     auto check = [&](ll i, ll ttl, ll msxval) {
// //         ll q = (ttl + cn) / i;
// //         return (q * i > ttl - 1) && (q > msxval - 1);
// //     };

// //     input();
// //     ll msxval = fidmx();
// //     ll ttl = cuall();

   
// //     auto binary_search = [&](ll left, ll right) {
// //         ll res = 0;
// //         while (left <= right) {
// //             ll mid = left + (right - left) / 2;
// //             if (check(mid, ttl, msxval)) {
// //                 res = mid; 
// //                 left = mid + 1;
// //             } else {
// //                 right = mid - 1; 
// //             }
// //         }
// //         return res;
// //     };

// //     ll result = binary_search(1, n);
// //     p(result);
// // }

// // int main() {
// //     fastread();
// //     ll t;
// //     cin >> t;
// //     while (t--) solve();
// //     return 0;
// // }


// #include <bits/stdc++.h>
// #define int long long
// #define all(a) a.begin(), a.end()
// using namespace std;

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> arr(n);

//     // Read array elements
//     for (auto &element : arr) {
//         cin >> element;
//     }

//     // Determine the maximum element in the array
//     int maxElement = LLONG_MIN;
//     for (const auto &x : arr) {
//         maxElement = max(maxElement, x);
//     }

//     // Compute the tt sum of the array
//     int totalSum = accumulate(all(arr), 0LL);

//     // Iterate from n downwards to find the largest valid i
//     for (int i = n; i > 0; --i) {
//         int quotient = (totalSum + k) / i;

//         // Conditions to skip
//         if (quotient * i <= totalSum - 1 || quotient <= maxElement - 1) {
//             continue;
//         }

//         // Output the result and exit
//         cout << i << endl;
//         return;
//     }
// }

// signed main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int testCases;
//     cin >> testCases;

//     // Process each test case
//     while (testCases--) {
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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (ll i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const ll mod = 1e9 + 7;
using namespace std;

void solev() {
    ll size, coins;
    cin >> size >> coins;
    vll vla(size);
    
    auto input = [&]() {
        for (auto &v : vla) cin >> v;
    };
    
    auto fidmx = [&]() {
        return *max_element(all(vla));
    };
    
    auto cuall = [&]() {
        return accumulate(all(vla), 0LL);
    };
    
    auto check = [&](ll i, ll tt, ll max_val) {
        ll q = (tt + coins) / i;
        return (q * i > tt - 1) && (q > max_val - 1);
    };
    
    input();
    ll max_val = fidmx();
    ll tt = cuall();
    
    for (ll i = size; i > 0; --i) {
        if (check(i, tt, max_val)) {
            p(i);
            return;
        }
    }
}

int main() {
    fastread();
    ll t;
    cin >> t;
    while (t--) solev();
    return 0;
}



