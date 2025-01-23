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
      int n, a, b; 
      cin>>n>>a>>b; 

      // if(n==2) {
      //    NO; 
      // }
      // else if(n%2!=0){ 
      //    if(abs(a-b)==1){
      //       NO;
      //    }else{
      //       YES
      //    }
      // }else{
      //    if(abs(a-b)==1){
      //       NO;
      //    }else if(){
            
      //    }else{
      //       YES
      //    }

      // }
      // b is forward and space id odd then no as bob will jump on odd turn  if is spce is ven then bob will have no chane if a is forward 
      if((a-b)%2==0){
         YES;
      }else{
         NO
      }


  }
    return 0;
}