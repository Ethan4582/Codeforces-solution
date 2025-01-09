// #include <bits/stdc++.h>
// #define ll long long 
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

// using namespace std;


// bool checconsecat3 (ll  n) {
//     string num = to_string(n);
//     for (int i = 0; i < (int)num.length() - 1; i++) {
//         if (num[i] == '3' && num[i + 1] == '3') {
//             return true;
//         }
//     }
//     return false;
// }

// ll  remvon3(ll  n) {
//     string num = to_string(n);
//     string res;
//     bool rem = false;
    
//     for (int i = 0; i < (int)num.length() - 1; i++) {
//         if (!rem && num[i] == '3' && num[i + 1] == '3') {
//             i++; // 
//             rem = true;
//         } else {
//             res += num[i];
//         }
//     }
    

//     if (!rem && !num.empty()) {
//         res += num.back();
//     }
    
//     return res.empty() ? 0 : stoll(res);
// }

// void solve() {
//      ll n;
//     cin >> n;
    
    
//     if (n == 0) {
//         YES
//         return;
//     }
    
    
//     while (true) {
       
//         if (n == 33 || (n >= 33 && n % 33 == 0)) {
//             YES;
//             return;
//         }
        
       
//         if (checconsecat3 (n)) {
//             n = remvon3(n);
//         }
//         else if (n >= 33) {
//             n -= 33;
//         }
      
//         else {
//             NO
//             return;
//         }
        
   
//         if (n == 0) {
//             YES
//             return;
//         }
//     }
// }

// int main() {
//   fastread();
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

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      int n ; cin>>n; 
      if(n % 33 == 0){
         YES
      }else{NO}
   
  }
    return 0;
}

