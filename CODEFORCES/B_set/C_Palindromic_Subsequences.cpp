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

// int main() {
//     fastread();
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vi ans(n);
        
//         function<void(vi&)> solve = [&](vi& ans) {
//             transform(ans.begin(), ans.end(), ans.begin(), 
//                 [](int i) { return 0; });
                
//             ans[0] = ans[n-2] = 1;
//             ans[n-1] = 2;
            
//             iota(ans.begin() + 1, ans.begin() + (n-2), 1);
//         };
        
//         solve(ans);
        
//         copy(ans.begin(), ans.end(), 
//             ostream_iterator<int>(cout, " "));
//         cout << "\n";
//     }


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


void solve(int n) {
    vi ans(n);

    rep(i , 0, n) {
        if (i == 0 || i == n - 2) {
            ans[i] = 1;
        } else if (i == n - 1) {
            ans[i] = 2;
        } else {
            ans[i] = i;
        }
    }
    rep(i , 0 ,n) {
        cout << ans[i] << (i == n - 1 ? "\n" : " ");
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}

