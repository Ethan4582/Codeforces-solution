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
#define p(a) cout << a << " ";
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
      int n, d; cin>>n>>d; 
      p(1); 
      if( n>=3 || d==3 || d==6 || d==9 ) p(3); // n=2 and so num 33 , 66, 99 
      if(d==5) p(5 );
     if (d == 7 or n >= 3) p(7)
    if (d == 9 or n >= 6 or ((d == 3 or d == 6) and n >= 3)) p(9)
    cout <<endl;
  }
    return 0;
}