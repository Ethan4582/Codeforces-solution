#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";


const ll mod = 1e9 + 7;


using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
 
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
      cin>>arr[i];
    }
 
    for(auto el:arr){
      if(el%k == 0){
        cout<<0<<endl;
        return;
      }
    }
 
    if(k==2 || k==3 || k==5){
      ll mn = 1e9;
      for(auto el:arr){
        mn = min(mn, k*((el+k-1)/k) - el);
      }
      cout<<mn<<endl;
    }
    else{
      ll mn = 1e9;
      for(auto el:arr){
        mn = min(mn, k*((el+k-1)/k) - el);
      }
      
      vector<ll> diff2;
      for(auto el:arr){
        diff2.pb(2*((el+1)/2) - el);
      }
 
      sort(diff2.begin(),diff2.end());
      
      cout<<min(mn,diff2[0]+diff2[1])<<endl;
    }
}
 
int main() {
 
    
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
 
    return 0;
}