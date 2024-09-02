// #include <bits/stdc++.h>
// #define ll long long
// #define MOD 1000000007

// using namespace std;

// ll add(ll x, ll y) {
//     return (x + y) % MOD;
// }

// ll mul(ll x, ll y) {
//     return (x * y) % MOD;
// }

// ll mod_pow(ll bas, ll ep) {
//     ll result = 1;
//     while (ep > 0) {
//         if (ep % 2 == 1) {
//             result = mul(result, bas);
//         }
//         bas = mul(bas, bas);
//         ep /= 2;
//     }
//     return result;
// }

// ll heck_iv(ll x) {
//     return mod_pow(x, MOD - 2);
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> arr(n);
//         vector<ll> prefsum(n + 1, 0);

//         ll tsum = 0;
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//             tsum = add(tsum, arr[i]);
//             prefsum[i + 1] = add(prefsum[i], arr[i]);
//         }

//         ll result = 0;
//         for (int i = 0; i < n; ++i) {
//             ll rems = add(tsum, -arr[i]);
//             ll contr = mul(rems, arr[i]);
//             result = add(result, contr);
//         }

//         ll check = mul(n, n - 1);
//         cout << mul(result, heck_iv(check)) << "\n";
//     }

//     return 0;
// }


// // // #include <bits/stdc++.h>
// // // #define ll long long
// // // #define MOD 1000000007

// // // using namespace std;

// // // ll add(ll x, ll y) {
// // //     return (x + y) % MOD;
// // // }

// // // ll mul(ll x, ll y) {
// // //     return (x * y) % MOD;
// // // }

// // // ll mod_pow(ll bas, ll ep) {
// // //     ll result = 1;
// // //     while (ep > 0) {
// // //         if (ep % 2 == 1) {
// // //             result = mul(result, bas);
// // //         }
// // //         bas = mul(bas, bas);
// // //         ep /= 2;
// // //     }
// // //     return result;
// // // }

// // // ll heck_iv(ll x) {
// // //     return mod_pow(x, MOD - 2);
// // // }

// // // int main() {
// // //     ios::sync_with_stdio(false);
// // //     cin.tie(nullptr);

// // //     int t;
// // //     cin >> t;

// // //     while (t--) {
// // //         int n;
// // //         cin >> n;
// // //         vector<ll> arr(n);
// // //         vector<ll> pref_sum(n + 1, 0);
// // //         vector<ll> suff_sum(n + 1, 0);

// // //         ll tsum = 0;
// // //         for (int i = 0; i < n; ++i) {
// // //             cin >> arr[i];
// // //             tsum = add(tsum, arr[i]);
// // //         }

// // //         pref_sum[0] = arr[0];
// // //         for (int i = 1; i < n; ++i) {
// // //             pref_sum[i] = add(pref_sum[i - 1], arr[i]);
// // //         }

// // //         suff_sum[n - 1] = arr[n - 1];
// // //         for (int i = n - 2; i >= 0; --i) {
// // //             suff_sum[i] = add(suff_sum[i + 1], arr[i]);
// // //         }

// // //         ll result = 0;
// // //         for (int i = 0; i < n; ++i) {
// // //             ll rems = add(tsum, -arr[i]);
// // //             ll contr = mul(rems, arr[i]);
// // //             result = add(result, contr);
// // //         }

// // //         ll check = mul(n, n - 1);
// // //         cout << mul(result, heck_iv(check)) << "\n";
// // //     }

// // //     return 0;
// // // }


// // #include <bits/stdc++.h>
// // #define MOD 1000000007
// // #define ll long long

// // using namespace std;


// // ll in(ll x, ll mod = MOD) {
// //     ll result = 1;
// //     ll base = x;
// //     ll exp = mod - 2;
// //     while (exp > 0) {
// //         if (exp % 2 == 1) {
// //             result = (result * base) % mod;
// //         }
// //         base = (base * base) % mod;
// //         exp /= 2;
// //     }
// //     return result;
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int test_cases;
// //     cin >> test_cases;

// //     while (test_cases--) {
// //         int len;
// //         cin >> len;
// //         vector<ll> val(len);

// //         ll tsum = 0;
// //         for (int i = 0; i < len; ++i) {
// //             cin >> val[i];
// //             tsum = (tsum + val[i]) % MOD;
// //         }

// //         ll totpsum = 0;
// //         for (int i = 0; i < len; ++i) {
// //             ll resum = (tsum - val[i] + MOD) % MOD;
// //             totpsum = (totpsum + val[i] * resum) % MOD;
// //         }

// //         ll norfactor = (len * (len - 1)) % MOD;
// //         ll result = (totpsum * in(norfactor)) % MOD;

// //         cout << result << "\n";
// //     }

// //     return 0;
// // }



// // #include <bits/stdc++.h>
// // #define ll long long
// // #define MOD 1000000007

// // using namespace std;

// // ll add_mod(ll a, ll b) {
// //     return (a + b) % MOD;
// // }

// // ll mul_mod(ll a, ll b) {
// //     return (a * b) % MOD;
// // }

// // ll mod_exp(ll base, ll exp) {
// //     ll res = 1;
// //     while (exp > 0) {
// //         if (exp % 2 == 1) {
// //             res = mul_mod(res, base);
// //         }
// //         base = mul_mod(base, base);
// //         exp /= 2;
// //     }
// //     return res;
// // }

// // ll in(ll x) {
// //     return mod_exp(x, MOD - 2);
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t;
// //     cin >> t;

// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<ll> a(n);
// //         vector<ll> pref(n + 1, 0);
// //         vector<ll> suff(n + 1, 0);

// //         ll total = 0;
// //         for (int i = 0; i < n; ++i) {
// //             cin >> a[i];
// //             total = add_mod(total, a[i]);
// //         }

// //         pref[0] = a[0];
// //         for (int i = 1; i < n; ++i) {
// //             pref[i] = add_mod(pref[i - 1], a[i]);
// //         }

// //         suff[n - 1] = a[n - 1];
// //         for (int i = n - 2; i >= 0; --i) {
// //             suff[i] = add_mod(suff[i + 1], a[i]);
// //         }

// //         ll res = 0;
// //         for (int i = 0; i < n; ++i) {
// //             ll rem = add_mod(total, -a[i]);
// //             ll contr = mul_mod(rem, a[i]);
// //             res = add_mod(res, contr);
// //         }

// //         ll factor = mul_mod(n, n - 1);
// //         cout << mul_mod(res, in(factor)) << "\n";
// //     }

// //     return 0;
// // }


// #include <bits/stdc++.h>
// #define MOD 1000000007
// #define ll long long

// using namespace std;


// ll in(ll x, ll mod = MOD) {
//     ll res = 1;
//     ll b = x;
//     ll e = mod - 2;
//     while (e > 0) {
//         if (e % 2 == 1) {
//             res = (res * b) % mod;
//         }
//         b = (b * b) % mod;
//         e /= 2;
//     }
//     return res;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         ll ts = 0;

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//             ts = (ts + a[i]) % MOD;
//         }

     
//         ll sum_sq = (ts * ts) % MOD;
//         ll prod_sum = 0;

//         for (int i = 0; i < n; ++i) {
//             prod_sum = (prod_sum + a[i] * a[i]) % MOD;
//         }

      
//         ll num = (sum_sq - prod_sum + MOD) % MOD;
//         ll den = (n * (n - 1)) % MOD;
//         ll res = (num * in(den)) % MOD;

//         cout << res << "\n";
//     }

//     return 0;
// }



#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        ll ts = 0;

     
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            ts = (ts + arr[i]) % MOD;
        }

      
        vector<ll> prefix_sum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix_sum[i + 1] = (prefix_sum[i] + arr[i]) % MOD;
        }

      
        ll tsum = (ts * ts) % MOD;

        
        ll sumsqu = 0;
        for (int i = 0; i < n; ++i) {
            sumsqu = (sumsqu + arr[i] * arr[i]) % MOD;
        }

     
        ll resnum = (tsum - sumsqu + MOD) % MOD;
        ll resd = (n * (n - 1)) % MOD;

        
        ll dem = 1;
        ll a = resd, b = MOD, x0 = 1, x1 = 0;
        while (b > 0) {
            ll q = a / b;
            tie(a, b) = make_pair(b, a % b);
            tie(x0, x1) = make_pair(x1, x0 - q * x1);
        }
        dem = (x0 + MOD) % MOD;

        ll result = (resnum * dem) % MOD;
        cout << result << "\n";
    }

    return 0;
}
