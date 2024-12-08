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

using namespace std ; 

int main()
{
ll n  , m , mx=0 , mn=0 , MAX=0 , MIN=0;
cin>>n>>m;
vi a (m) , b(m);
for(int i=0 ; i<m ; i++)
{
    cin>>a[i];
}
b=a;

//!  min prcis is when all  fill the empty seat first 

rep( i , 0 , n){
   int mx=*max_element(all(b));
   MAX+=mx;

   for ( int j =0 ;j < m ; j++ ){
      if ( b[j]==mx){
          b[j]--;
          break ;
   }

}
}

b=a;
for(int i=0 ; i<n ; i++)
{
    int mn = *min_element(b.begin() , b.end());
    MIN+=mn;
    for(int j=0  ; j<m ; j++)
    {
        if(b[j] == mn)
        {
            b[j]--;
            if(b[j]==0)
                b[j]=1000000;
            break;
        }
    }
}
cout<<MAX<<" " << MIN;
}





