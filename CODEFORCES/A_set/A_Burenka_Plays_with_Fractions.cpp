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

bool check(ll a ,ll b){
   if(a==b){
      return true;
   }
}
int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      ll a , b, c, d; 
      cin>>a>>b>>c>>d;  // easiest way is to make it to zero 
   ll y=c*b; 
   ll x=a*d;
      if(x==y){
         p(0);
      }else if(y!=0 && x%y==0  || x!=0 && y % x==0){
         p(1);
      }else{
         p(2)  
      }
    
  }
    return 0;
}