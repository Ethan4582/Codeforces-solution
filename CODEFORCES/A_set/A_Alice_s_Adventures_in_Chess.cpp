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
//     while (t--) {
//         int n, a, b; 
//         cin >> n >> a >> b;
//         string s;
//         cin >> s;


//         int x = 0, y = 0;
//       vector<pi> pos;
        
//         for (char it : s) {
//             if (it == 'N') y++; 
//             else if (it == 'S') y--; 
//             else if (it == 'E') x++; 
//             else x--;
//             pos.push_back({x, y}); // all posible cor
//         }
        
//         bool met = false; 
        
//         //chk first cycle 
//         for (auto pos : pos) {
//             if (pos.first == a && pos.second == b) {
//                 YES;
//                 met = true; 
//                 break;
//             }
//         }

//         if (met) continue;

//         //curr pos
//         int netX = x, netY = y;

//         //  will  will never reach
//         if (netX == 0 && netY == 0) {
//             NO;
//             continue;
//         }

//         // check for particl cycl can it reach 
//         for (int i = 0; i < pos.size(); i++) {
//             int dfx = a - pos[i].first;
//             int dfy = b - pos[i].second;

//             // cna we reach muilplc cycle 
//             if (dfx % netX == 0 && dfy % netY == 0) {
//                 int ncycl = dfx / netX;
//                 //can we  reack at same y cycle 
//                 if (ncycl == dfy / netY && ncycl >= 0) {
//                     YES;
//                     met = true; 
//                     break;
//                 }
//             }
           
//             else if (netX == 0 && dfx == 0 && dfy % netY == 0) {
//                 int ncycl = dfy / netY;
//                 if (ncycl >= 0) {
//                     YES;
//                     met = true;
//                     break;
//                 }
//             }
            
//             else if (netY == 0 && dfy == 0 && dfx % netX == 0) {
//                 int ncycl = dfx / netX;
//                 if (ncycl >= 0) {
//                     YES;
//                     met = true;
//                     break;
//                 }
//             }
            
//         }

//         if (!met) {
//             NO; 
//         }
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

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    map<char, pair<int, int>> tmp = {
        {'N', {0, 1}},
        {'E', {1, 0}},
        {'S', {0, -1}},
        {'W', {-1, 0}},
    };
    int c = 0, d = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 10000; ++i) {
        c += tmp[s[i % n]].first;
        d += tmp[s[i % n]].second;
        if (c == a && d == b) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
 
int main() {
   fastread()
 
    int t;
    cin >> t;
    while (t--)
        solve();
}
