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

// int a[N]; 
// bool c[N]; 

// #include <bits/stdc++.h>
// #define ll long long
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));

// using namespace std;

// void solve() {
//     ll k, l1, r1, l2, r2; 
//     cin >> k >> l1 >> r1 >> l2 >> r2;
//     ll p = 1, cnt = 0;

//     while (p <= 1e9) {
//         cnt += max(min(r2 / p, r1) - max((l2 + p - 1) / p, l1) + 1, 0LL);
//         p *= k;
//     }
//     cout << cnt << "\n";
// }

// int main() {
//     fastread();
//     ll t;
//     cin >> t;
//  // sim BS on x , y for  y=k^n * x  taht fit the range wont work a x is muiltiple of y 
//     // l1< =y<=r1 -> l2<=px<=r2  as n can not that big as 2^30> 1e9
//     // take intersection of both the condition  and itrate over allthe vlaue of p 
//     // ceil -> ceil(a/b) = a+b-1/b
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

int solve() {
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll u = 1;
    ll ans = 0;
    while (u <= 1e9) {
        ll low = max((l2 + u - 1) / u, l1);
        ll high = min(r2 / u, r1);
        if (low <= high) {
            ans += high - low + 1;
        }
        u *= k;
    }
    p(ans);
    return 0;
}

int main() {
    fastread();
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
