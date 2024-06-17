#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>

vl psum(const vl &a) {
    vl psum(a.size() + 1);
    for (int i = 0; i < a.size(); ++i) {
        psum[i + 1] = psum[i] + a[i];
    }
    return psum;
}

int main() {
    int n, q;
    cin >> n >> q;
    
    vl x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    
    vl p = psum(x);
    
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << p[b] - p[a - 1] << "\n";
    }
    
    return 0;
}
