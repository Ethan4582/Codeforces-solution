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
//     while(t--){
//       int m,a,b,c;
//         cin>>m>>a>>b>>c;
//         int rem1=0;
//         int rem2=0;
//         int totalseat=0;
//         if(m>=a){
//             rem1=m-a;
//             totalseat=totalseat+a;
//         }

//         else if(m<a){
//             totalseat=totalseat+m;
//         }

//         if(m>=b){
//             rem2=m-b;
//             totalseat=totalseat+b;
//         }

//         else if(m<b){
//             totalseat=totalseat+m;
//         }

//         int totalrem=rem1+rem2;

//         if(totalrem>=c){
//             totalseat=totalseat+c;
//         }

//         else if(totalrem<c){
//             totalseat=totalseat+totalrem;
//         }
//         cout<<totalseat<<endl;
   
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
       ll m,a,b,c;
         cin>>m>>a>>b>>c;
         ll asum= min(a, m); 
         ll bsum = min(b, m); 
         ll cum = min(2*m-asum-bsum , c); 
         p(asum+bsum+cum);

  }
    return 0;
}