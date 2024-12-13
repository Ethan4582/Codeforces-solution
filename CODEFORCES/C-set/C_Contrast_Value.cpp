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

// int solv(vector<int>& arr) {

//     int unsz = unique(arr.begin(), arr.end()) - arr.begin();
//     int ans = unsz;


//     for (int i = 0; i + 2 < unsz; ++i) {
//         bool isPeak = (arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]);
//         bool isValley = (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]);
        
//         ans -= (isPeak || isValley);
//     }

//     return ans;
// }

// int main() {
//   fastread()
    
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
        
//         vi arr(n);
//         for (int& it : arr) {
//             cin >> it;
//         }

//         int ans = solv(arr);
//         p( ans )
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
         int n, slop=0, chg=0 ; 
              cin>>n; 
              vll a(n);
              rep( i ,0 ,n){cin>>a[i];}

              if(n==1){
                p(1);
                continue;
              }

              for(int i =1; i <n; i++){
                // if it is inresing the slope change
                if(a[i-1]>a[i]  && chg!=1){
                    slop++;
                    chg=1;
                }else if(a[i-1]<a[i]  && chg!=-1){
                    slop++;
                    chg=-1;
                }
               
              }

               p(slop+1);
  }
    return 0;
}