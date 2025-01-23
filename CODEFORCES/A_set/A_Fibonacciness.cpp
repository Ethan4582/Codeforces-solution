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
      ll a,b,d,e;
  cin>>a>>b>>d>>e;
  ll cnt1=1;
  ll c=a+b;
  if(b+c==d)cnt1++;
  if(c+d==e)cnt1++;
  
  c=d-b;
  ll cnt2=1;
  if(c==a+b) cnt2++;
  if(c+d==e)cnt2++;
  
  p(max(cnt1,cnt2))
  }
    return 0;
}



int main(){
    int T;
    cin>>T;
 
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
 
        int cnt = 0, mx = -1;
        for(int i=-100;i<=100;i++){
            if(a+b==i) cnt++;
            if(b+i==c) cnt++;
            if(i+c==d) cnt++;
            mx = max(cnt,mx);
            cnt = 0;
        }
        cout<<mx<<endl;
    }
 
    return 0;
}