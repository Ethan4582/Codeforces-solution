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
// #define p(a) cout << a << " ";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int a[N]; 
// bool c[N]; 

// // for min as many 6 bus as possible  for max as many as 4 bus pssible 

// int main() {
//     fastread();
//     int t ; 
//     cin >>t ; 
//     while(t--){
//  long long n; 
//     cin >> n;
//      if(n<4 || (n%4!=0 && n%4!=2)) {
//         cout << -1<<endl;
//         continue;
//     }else if(n%6==0){
//       p(n/6); 
//       p(n/4);
//       cout <<endl;
//     }else{
//       p((n/6)+1); 
//       p(n/4);
//         cout <<endl;

//     }
// //     ll newn= n/2; 
    
// //     ll mxb = n / 2;

// // // as many 3 a possibel 
// //     ll minb; 
// //     if(n%3==0){
// //       minb=newn/3;
// //     }else{
// //        cout << minb << " " << mxb << endl; 
// //     }

   
//   }
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
#define p(a) cout << a << " ";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        long long n; 
        cin >> n;

        // Handle edge cases
        if (n < 4 || n % 2 != 0) {
            cout << -1 << endl; 
            continue;
        }
        ll n2=n/2;
        ll  maxb = n2 / 2;
        ll mob;
        if (n2 % 3 == 0) {
            mob = n2 / 3;
        } else {
            mob = (n2/ 3) + 1; 
        }

   
        cout << mob << " " << maxb << endl; 
    }
    return 0;
}
