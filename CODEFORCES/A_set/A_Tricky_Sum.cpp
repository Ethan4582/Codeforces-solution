

// #include<bits/stdc++.h>

// using namespace std;

// int main()

// {
   
//     int t;
   
//     cin>>t;
   
//     while(t--)
       
//     {
//         __int64 n,i;
   
//         cin>>n;
       
//          __int64 ans=((n+1)*n)/2-2;
        
//         for( int i=1;pow(2,i)<=n;i++)
           
//         {
           
//         ans = ans - pow(2,i+1);
       
//         }
       
//         cout<<ans<<endl;
//     }
   
//     return 0;
// }



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


#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

int main()
{
    ll m,n,t,d,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1)/2;
       
        a=1;
        while(a<=n)
        {
            ans-=2*a;
            a=a*2;
        }
        cout<<ans<<endl;
    }
        return 0;

}