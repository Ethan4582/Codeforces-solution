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
  int n, sum=0;
     cin>>n;
     vi a(n+1);
     for(int i=0;i<=n;i++){
         cin>>a[i];
     }
     sort(a.begin(),a.begin()+n);
     
     rep( i ,0 , n){
       if(a[i]<=a[n])continue;   if(a[i]>2*a[n])break;
       swap(a[i],a[n]);
     }
     int ans= accumulate(a.begin()+0, a.end()-1, 0);
     p(ans);
   
  }
    return 0;
}
