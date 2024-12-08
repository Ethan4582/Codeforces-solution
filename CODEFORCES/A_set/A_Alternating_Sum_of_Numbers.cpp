#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> a(n);
        
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
       
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                sum += a[i]; 
            } else {
                sum -= a[i]; 
            }
        }

        cout << sum << "\n"; 
    }
    
    return 0;
}
