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
// signed main()
// {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);
//     int t; cin >> t;
//     while (t--)
//     {
//         int y, x; cin >> y >> x;
//         int k = max(x, y);
//         int ans = (k-1)*(k-1);
//         if (k&1) ans += (x + (k-y));
//         else ans += (y + (k-x));
//         cout << ans << '\n';
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    if (a > b) {
        cout << (a % 2 == 0 ? a * a - b + 1 : (a - 1) * (a - 1) + b);
    } else {
        cout << (b % 2 == 0 ? (b - 1) * (b - 1) + a : b * b - a + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}
