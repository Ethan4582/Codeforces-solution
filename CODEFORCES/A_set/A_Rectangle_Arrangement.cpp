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

// vector<pi> dim(N);

// int main() {
//     fastread();
//     int t;
//     cin >> t;
    
//     auto solve = [&]() -> void {
//         int n;
//         cin >> n;
        
//         auto inp = [n]() -> vector<pi> {
//             vector<pair<int,int>> a1(n+1);
//             for(int i = 1; i <= n; ++i) {
//                 cin >> a1[i].first >> a1[i].second;
//             }
//             return a1;
//         };
        
//         auto mxperm = [](vector<pi>& a1, int size) -> int {
//             int mxwid = 0, mxheg = 0;
//             for(int i = 1; i <= size; i++) {
//                 mxwid = max(mxwid, a1[i].first);
//                 mxheg = max(mxheg, a1[i].second);
//             }
//             return 2 * (mxwid + mxheg);
//         };
        
//         auto a1 = inp();
//         p(mxperm(a1, n));
//     };
    
//     while(t--) solve();
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

int solve(){
  int n , mxx=0,mxy=0; 
      cin>>n;
      pi arr; 
      rep( i ,0 , n){
         int x,y;
         cin>>x>>y ;
         mxx= max(x, mxx); 
         mxy= max(y, mxy); 
      }

      p(2*(mxx+mxy))
}
int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      solve();
  }
    return 0;
}