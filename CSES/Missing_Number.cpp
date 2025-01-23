#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";


#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main() {
    fastread();
     ll n ; 
          cin>>n; 
          ll a1; cin>>a1;
          ll ans = a1;
          rep( i ,2 ,n){// xor it with the curr number then update number 
          ll k ; 
          cin>> k ;
          ans=ans^k; // xor the curr number 
          }

          rep(i, 1, n+1){
            ans^=i ;
          }

          p(ans);
    return 0;
}