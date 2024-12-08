#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int m1=0;
    int m2=0;
    for(int i=0;i<n-1;i++){
        int a;cin>>a;
        m1=max(m1,a);
    }cin>>m2;
    cout<<m1+m2<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}


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


using namespace std;
const ll mod = 1e9 + 7;
int solve(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int mx=*max_element(a.begin(), a.end()-1);
    cout<<mx+a[n-1]<<'\n';
    
}
int main() {
    
    int t, ans = 0; 
    cin >> t; 
    while(t--) {
      solve();
    }
    
    return 0;
}