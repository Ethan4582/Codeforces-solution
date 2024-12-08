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

 
void solve(){
  ll n,k;
  cin>>n>>k;
  vector<ll> a(n);
  for(auto & i : a) cin>>i;
  sort(a.begin(),a.end());
  ll st=a[n-1],en=a[n-1]+k-1;
  map<ll,ll> b;
  for(ll i=0;i<n-1;i++)
  {
      ll f=st-a[i];
      f=f/(2*k);
      ll mc=a[i]+f*2*k;
      if((st-mc)>=k) mc+=(2*k);
      b[mc]++;
  }
  b[st]++;
  if(b.size()>k) cout<<-1<<"\n";
  else
  {
      ll mx=0;
      ll mn=1e9;
      for(auto i : b)
      {
          mx = max(mx,i.first);
          mn = min(mn,i.first);
      }
      if(mx-mn>k-1) cout<<-1<<"\n";
      else cout<<mx<<"\n";
  }
  
}
    
    signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}