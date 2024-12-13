#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

ll check(ll x, int n, int m) {
    
    for (int i = 0; i < n; ++i) {
        x = x / 2 + 10;  
        if (x <= 0) return x; 
    }
 
    for (int j = 0; j < m; ++j) {
        x -= 10;  
        if (x <= 0) return x;  
    }
    return x; 
}

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        ll x, n, m; 
        cin >> x >> n >> m;

        bool ans = false;

        for (int i = 0; i <= n; ++i) {  
            for (int j = 0; j <= m; ++j) {  
                if (check(x, i, j) <= 0) {
                    ans = true;
                    break;  
                }
            }
            if (ans) break;  
        }

        if (ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
