#include <bits/stdc++.h>
#define ll long long
#define p(a) cout << a << "\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

//  
int a[N]; 
bool c[N]; 

ll gcd(ll a , ll b ){
    if (b == 0)
        return a;
    return gcd(b, a % b); 
}

ll lcm(ll a , ll b ){
  return (a / gcd(a, b)) * b; // Preven overflow
}

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
        ll a, b; 
        cin >> a >> b;
        if(  b%a==0){
         p(b*b/a)
        }else{
         p(lcm(a, b));
        }
        
    }
    return 0;
}
