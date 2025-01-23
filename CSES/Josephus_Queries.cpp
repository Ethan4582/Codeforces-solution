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

//! read the question properly 
// for odd cas i can remove n/2+1 children and for ven i can remove  n/2 children  and i ned to remove evern 2 elmnet then i nned to retuen the k elmnet removed 

// for even case  if k is less then n i ans simply k *2 elment as it is even 
// for odd case it will exted the idx 

// let say i remove venr second elemnt   for even size even elment new circle can be writen as 2*i-1  for odd it can be 2*i+1  
int solve(ll n , ll k){
   if(n==1) return 1; 
   if(k <=(n+1)/2){
      // odd size
       if(2*k>n){
         return (2*k)%n;
       }else{  // for ven it can be simple
         return 2*k;
       }
   }
     int temp=solve(n/2 ,  k-(n+1)/2); 
   if(n&1>0){// if size is odd 
   // after remove the ever 2 elment  the elment will be in the for o for evrn 2*k-1  and for odd it wil be 2*k+1 is k=i 1. 2..3.4 of new circle the idx 
    return   2* temp +1;
   }else{
      return  2* temp -1;
   }
}
int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      ll n , k ; 
      cin>>n>>k;
      p(solve(n , k ));
  }
    return 0;
}