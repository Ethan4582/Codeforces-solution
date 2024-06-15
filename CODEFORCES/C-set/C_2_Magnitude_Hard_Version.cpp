#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define int long long

int M=998244353;

int powm(int x,int n){
    x%=M;
    if(n==0)return 1; else if(n==1)return x;
    int p= powm(x*x,n/2);
    if(n%2) return p*x%M; else return p;
}


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> pr(n);
    pr[0]=a[0];
    for(int i=1;i<n;i++) pr[i]=pr[i-1]+a[i];

    vector<int> cnt(n,0);
    cnt[0]=(pr[0]<0);
    for(int i=1;i<n;i++) cnt[i]=cnt[i-1]+(pr[i]<0);

    int mn=*min_element(pr.begin(), pr.end());
    if(mn>=0){
        int ans= powm(2,n);
        cout<<ans<<'\n';
        return;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(pr[i]!=mn) continue;
        int c=n-cnt[i];
        ans=(ans+powm(2,c))%M;
    }
    cout<<ans<<'\n';
}

int32_t main() {
    fastIO;

    int t=1;
    cin>>t;
    while(t--){
        
        solve();
    }
    return 0;
}