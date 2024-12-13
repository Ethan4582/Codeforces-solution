#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;
   while(t--){
      {
    int n ,k;
    cin>>n>>k;
         vll a(n);
         rep( i ,0 ,n){cin>>a[i];}
    if(k==1 && n>1) 
    {
       NO
        
    }
    else if(n==1)
    {
        cout<<"YES"<<endl<<1<<endl;
    }
    else{
        int flag=0;
    for (int i =0;i<n;i++)
    { int count =0;
        for(int j = 0;j<n;j++)
        {
            if(abs((a[i]-a[j])%k==0 && (i!=j)))
            { 
                break;
            }
           count++; 
        }
        if(count==(n)) 
            {
                cout<<"YES"<<endl<<i+1<<endl;
                flag=1;
                break;
            }
    }
    if(flag==0) NO
        }
}
   }
    return 0;
}
