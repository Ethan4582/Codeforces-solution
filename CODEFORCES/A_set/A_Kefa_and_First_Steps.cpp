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
    int t, cnt=0 , prev=0  , ans=INT_MIN; 
    cin >>t ; 

    while(t--){
      int k; cin>> k; 
      if(prev<=k){
         cnt++;
         prev= k;
      }else{
           ans= max(cnt , ans);
         cnt=1;
         prev= k;
      }
     

  }
    ans= max(cnt , ans);
  p(ans);
    return 0;
}