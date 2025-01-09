


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
    int n,k;
    cin>>n>>k;
    if(k==1){
        for(int i=0;i<n;i++){
            if(i)cout<<" ";
            cout<<i+1;
        }
        cout<<endl;
    }
    else{
        int l=1,r=n;
        vi ans;
        for(int i=1;i<=n;i++){
            if(i%k==0){
                ans.pb(l);
                l++;
            }
            else{
                ans.pb(r);
                r--;
            }
        }
        
        rep(i ,0, n){
            if(i)cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;
    
}
}
int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      solve();  
  }
    return 0;
}

