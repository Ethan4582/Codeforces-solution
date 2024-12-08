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

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main()
{   
    
      int a,b,i;
      cin>>a>>b;

       int l=a/4;
       
       for(i=0;i<=l;i++)
       {
          if(i==l) cout<<5;
          else cout<<4;
       }
       cout<<endl;
       for(i=0;i<=l;i++)
       {
           cout<<5;
       }

    
    return 0;
}