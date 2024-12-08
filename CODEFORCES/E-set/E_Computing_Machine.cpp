#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define ff first
#define ss second
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


void Code(){
    int n; cin>>n;
    string s,t; cin>>s>>t;
    string s1=s, t1=t;
    for(int i=1; i<n-1; i++){
        if(s[i-1]=='0' && s[i+1]=='0') t1[i]='1';
    }
    vector<pair<int,int>> req(n,{-1,-1});
    for(int i=1; i<n-1; i++){
        if(s[i]=='1') continue;
        if(t1[i-1]=='1' && t1[i+1]=='1'){
            s1[i]='1';
            req[i]={i-1,i+1};
            if(t[i-1]=='0') req[i].ff--;
            if(t[i+1]=='0') req[i].ss++;
        }
    }
    vector<int> pr(n,0), pr1(n,0);
    pr[0]=s[0]=='1';
    for(int i=1; i<n; i++) pr[i]=pr[i-1]+(s[i]=='1');
 
    for(int i=1; i<n; i++){
        pr1[i]=pr1[i-1];
        if(s[i]=='0' && s1[i]=='1') pr1[i]++;
    }
 
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        l--; r--;
 
        int ans=pr[r];
        if(l>0) ans-=pr[l-1];
 
        if(r-l+1<=4){
            for(int i=l;i<=r;i++){
                if(s[i]=='0' && s1[i]=='1' && req[i].ff>=l && req[i].ss<=r) ans++;
            }
            cout<<ans<<'\n';
            continue;
        }
 
        for(int i=l; i<l+2; i++) if(s[i]=='0' && s1[i]=='1' && req[i].ff>=l && req[i].ss<=r) ans++;
        for(int i=r-1; i<r+1; i++) if(s[i]=='0' && s1[i]=='1' && req[i].ff>=l && req[i].ss<=r) ans++;
        ans+=pr1[r-2]-pr1[l+1];
        cout<<ans<<'\n';
    }
}
 
int main() {
  
    int t=1;
    cin>>t;
    while(t--){
        Code();
    }
    return 0;
}