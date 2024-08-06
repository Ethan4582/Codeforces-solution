#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";


const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main() {
    
    int t ; 
    cin >>t ; 
    while(t--){
       int n;
    cin >> n; 
    vi a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

   
    int ans = INT_MIN;
    
   
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { 
            ans = max(ans, a[i]);
        }
    }

    p( ans );
    
  }
    return 0;
}