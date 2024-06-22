#include <bits/stdc++.h>
#define ll long long

using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x; 
    }
    return gcd(y, x % y);
}

int lcm( int x , int y){
   return x*y/gcd(x , y);
}

int main() {
    int t ; 
    cin>>t ;
    while(t--){
ll n;
    cin >> n;
    
    vector <ll> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    
    ll z = 1;
    for (int i = 0; i < n; i++) {
        z = lcm(z, k[i]);
    }
    
    ll suma = 0;
    for (int i = 0; i < n; i++) {
        suma += z / k[i];
    }

    // x+y+z < (x+y+z)*k 
    
    if (suma < z) {
        for (int i = 0; i < n; i++) {
            cout << z / k[i] << " ";
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
    }
}
