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
    int t; 
    cin >> t; 
    while(t--) {
      
      //   if (k == 1) {
      //       cout << x << " " << y << "\n";
      //   }
      
      //   else if (k & 1) {
      //       cout << x << " " << y << "\n"; 
      //       rep(i, 0, k - 1) {
      //           cout << x << " " << (y + 2 * (i + 1) * ((i % 2 == 0) ? 1 : -1)) << "\n";
      //       }
      //   }
       
      //   else {
      //       cout << x << " " << y << "\n"; 
      //       rep(i, 0, k - 1) {
               
      //           cout << x << " " << (y + 2 * (i + 1) * ((i % 2 == 0) ? 1 : -1)) << "\n";
      //       }
      //   }


      
    int x,y,k;
    cin >> x >> y >> k;
 
    if(k % 2 == 1)
    {
        cout << x << " " << y << '\n';
        k--;
    }
 
    for(int i=1;i<=(k/2);i++)
    {
        cout << (x-i) << " " << y << '\n';
        cout << (x+i) << " " << y << '\n';
    }
    }
    return 0;
}