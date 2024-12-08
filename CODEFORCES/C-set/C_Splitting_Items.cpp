




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

// void solve() {
//     int n, k; 
//     cin >> n >> k; 
//     vi a(n); 

//    rep(i, 0,n ) 
//         cin >> a[i]; 

//     sort(rall(a)); 

//    rep(i, 0,n ) {
//         if (k == 0) 
//             break; 
//         if (i == n - 1) 
//             break; 
//         int df = a[i] - a[i + 1]; 
//         int r = min(df, k); 
//         a[i + 1] += r; 
//         k -= r; 
//         i++; 
//     } 

//     int ods = 0; 
//     int evs = 0; 

//    rep(i, 0,n ) {
//         if (i % 2 == 0) 
//             evs += a[i]; 
//         else 
//             ods += a[i]; 
//     } 

//     p(abs(ods - evs))
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
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

int a[N]; 
bool c[N]; 

int solve(){
     int n, k;
    cin >> n >> k;
    
         vll a(n);
         rep( i ,0 ,n){cin>>a[i];}
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        ans += a[i] - a[i + 1];
    }
    ans = max(0, ans - k);
    if (n % 2)
        ans += a[n - 1];
   p( ans );
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