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
//  if i found one lemnt in a that is less that required the no as their will be some other in order to in cres it demain has decres the the one that as intial not enough 


// fi find condtion where if i increas the less one and decres the less to mkae it in valid then false 
int a[N]; 
bool c[N]; 

void solv (){
   ll n;
	cin>>n;
	ll a[n],b[n];
	rep(i,0,n) cin>>a[i];
	rep(i,0,n) cin>>b[i];
	ll def=0,extra=0;
	ll a1=1e10;
	ll n1=0;
	ll var=0;
	bool flag=true;
	rep(i,0,n){
		if(a[i]>=b[i]){
			ll temp=a[i]-b[i];
			extra+=temp;
			a1=min(a1,temp);
		}else{
			n1++;
			ll temp=b[i]-a[i];
			if(flag){
				var=temp;
				flag=false;	
			}
			def+=(def+temp);
		}
	}		
	if(n1>1){
		NO
	}else{
		if(a1>=var){
			YES
		}else{NO	
		}
	}
}

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
      solv();
  }
    return 0;
}