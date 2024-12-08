#include <bits/stdc++.h>

using namespace std;

int main() {

    
    int n, m;
    cin >> n >> m;
    vector<long long> x(n), p(m);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> p[i];
    }
    
    long long g = x[1] - x[0];
    for (int i = 2; i < n; ++i) {
        g = __gcd(g, x[i] - x[i - 1]);
    }
    
    for (int i = 0; i < m; ++i) {
        if (g % p[i] == 0) {
            cout << "YES" << endl;
            cout << x[0] << " " << i + 1 << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}
