// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<ll>
// #define vll vector<ll>
// #define pi pair<ll,ll> 
// #define vs vector<string>
// #define vpii vector<pair<ll, ll>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (ll i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const ll N = 1e5 + 5; 

// using namespace std;

// ll a[N]; 
// bool c[N]; 

// ll solve() {
//     ll n; 
//     cin >> n; 
//     vll a(n);
//     rep(i, 0, n) { cin >> a[i]; }

//     // no need of inversion 
//     ll cnt = 0, inv = 0, ans = 0; 
//     rep(i, 0, n) {
//         if (a[i] == 0) {
//             cnt++;
//         }
//         else {
//             inv += cnt; // cnt all the 1 came before are the inversion or all the 1 before every zero 
//         }
//     }
//     ans = max(ans, inv);

//     // change first 0 to 1 for change the first 0
//     vll b = a; 
//     rep(i, 0, n) {
//         if (b[i] == 0) {
//             b[i] = 1;
//             break;
//         }
//     }
//     // count inver for first 0 change 
//     cnt = 0, inv = 0; 
//     rep(i, 0, n) {
//         if (b[i] == 1) {
//             cnt++;
//         }
//         else {
//             inv += cnt; // cnt all the 1 came before are the inversion or all the 1 before every zero 
//         }
//     }
//     ans = max(ans, inv);

//     // check if inversion from back 
//     b = a;
//     // change 1 to 0 
//     for (ll i = n - 1; i > 0; i--) {
//         if (b[i] == 1) {
//             b[i] = 0;
//             break;
//         }
//     }
//     // count new inversion 
//     cnt = 0, inv = 0; 
//     rep(i, 0, n) {
//         if (b[i] == 1) {
//             cnt++;
//         }
//         else {
//             inv += cnt; // cnt all the 1 came before are the inversion or all the 1 before every zero 
//         }
//     }
//     ans = max(ans, inv);

//     return ans;
// }

// ll main() {
//     fastread();
//     ll t; 
//     cin >> t; 
//     while (t--) {
//         p(solve());
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<ll>
#define vll vector<ll>
#define pi pair<ll,ll> 
#define vs vector<string>
#define vpii vector<pair<ll, ll>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (ll i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const ll N = 1e5 + 5; 

using namespace std;

ll a[N]; 
bool c[N]; 

/// hint is to get maxium 0 together at the end so  ans = number 0 * number of 1 in front 

ll solve() {
    ll n; 
    cin >> n;
    vll a(n);
    ll c0 = 0, c1 = 0;
    for (ll k = 0; k < n; k++) {
        cin >> a[k];
        if (a[k] == 0) {
            c0++;
        } else {
            c1++;
        }
    }
    if (c0 == 0) {
        return n - 1;
    } else if (c1 == 0) {
        return n - 1;
    } else {
        vll v1 = a;
        for (ll k = 0; k < n; k++) {
            if (v1[k] == 0) {
                v1[k] = 1;
                break;
            }
        }
        vll suff(n);
        ll sum = 0;
        for (ll k = n - 1; k >= 0; k--) {
            if (v1[k] == 0) {
                sum++;
                suff[k] = sum;
            } else {
                suff[k] = sum;
            }
        }
        ll ans1 = 0;
        for (ll k = 0; k < n; k++) {
            if (v1[k] == 1) {
                ans1 += suff[k];
            }
        }
        vll v2 = a;
        for (ll k = n - 1; k >= 0; k--) {
            if (v2[k] == 1) {
                v2[k] = 0;
                break;
            }
        }
        vll a2(n);
        ll sum2 = 0;
        for (ll k = n - 1; k >= 0; k--) {
            if (v2[k] == 0) {
                sum2++;
                a2[k] = sum2;
            } else {
                a2[k] = sum2;
            }
        }
        ll ans2 = 0;
        for (ll k = 0; k < n; k++) {
            if (v2[k] == 1) {
                ans2 += a2[k];
            }
        }
        vll a3(n);
        ll sum3 = 0;
        for (ll k = n - 1; k >= 0; k--) {
            if (a[k] == 0) {
                sum3++;
                a3[k] = sum3;
            } else {
                a3[k] = sum3;
            }
        }
        ll ans3 = 0;
        for (ll k = 0; k < n; k++) {
            if (a[k] == 1) {
                ans3 += a3[k];
            }
        }
        ll finas = max(ans1, ans2);
        finas = max(finas, ans3);
        return finas;
    }
}

int main() {
    fastread();
    ll t; 
    cin >> t; 
    while (t--) {
        p(solve());
    }
    return 0;
}
