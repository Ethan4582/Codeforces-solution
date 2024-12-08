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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const ll mod = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;
int a[N];
bool c[N];

int32_t main() {
    fastread();
    int t;
    cin >> t;
    
    auto solve = [&]() {
        ll a, b;
        cin >> a >> b;
        auto calc = [](ll x, ll y) -> ll {
            ll req = max(y - x, 0LL);
            return max(x - req, 0LL);
        };
        p( calc(a, b));
    };
    
    while(t--) solve();
    return 0;
}


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
// #define p(a) cout << a << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5;
// using namespace std;
// int a[N];
// bool c[N];

// int32_t main() {
//     fastread();
//     ll t;
//     cin >> t;
    
//     auto solv = [](ll x, ll y) {
//         ll diff = y - x;
//         ll needed = max(diff, 0LL);
//         return max(x - needed, 0LL);
//     };
    
//     while(t--) {
//         ll x, y;
//         cin >> x >> y;
//         auto res = [&]() {
//             return solv(x, y);
//         }();
//         p(res);
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

int main() {
    fastread();
    int t ,ans=0; 
    cin >>t ; 
    while(t--){
      int a , b ; 
      cin>>a>>b ; 
      if(a>=b){
        p(a)
      }else{
         int req= max(b-a , 0); 
          ans= max(a-req, 0);
           p(ans)
      }

     
  }

    return 0;
}