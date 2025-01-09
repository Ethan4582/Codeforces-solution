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
//     int t ; 
//     cin >>t ; 

//    // #define rep(i, a, n) for (int i = a; i < n; ++i)
//     while(t--){
//       int n , cnt=0; 
//       cin>>n; 
      
//       rep(i , 1, n+1){
//          rep(j , 1, n+1){
//             if(i+j==n) cnt++;
//          }
//       }

//       p(cnt);
//   }
//     return 0;
// }

#include <iostream>
using namespace std;

#define rep(i, a, n) for (int i = a; i < n; ++i)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

       
        int cnt = n - 1; //  valid pairs are (1, n-1), (2, n-2), ..., (n-1, 1)

        cout << cnt << endl;
    }
    return 0;
}
