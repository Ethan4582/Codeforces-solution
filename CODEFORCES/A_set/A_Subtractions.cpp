#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0);
#define p(a) cout << a << "\n";

int main() {
    fastio;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        
        ll cnt = 0;
        while (a > 0 && b > 0) {
            if (a > b) {
                cnt += a / b;
                a %= b;
            } else {
                cnt += b / a;
                b %= a;
            }
        }
        p(cnt);
    }
    
    return 0;
}
