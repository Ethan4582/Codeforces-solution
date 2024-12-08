#include <bits/stdc++.h>
using namespace std;

const int N = 1005;

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<string> s(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> s[i]; 
    }
    long long a[1005]; 
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    for (int i = 0; i < m; i++) {
        long long ma = 0;
        int b[1005][5] = {0};
        for (int j = 1; j <= n; j++) {
            b[i][s[j][i] - 'A']++;
        }
        for (int j = 0; j < 5; j++) {
            ma = max(ma, 1LL * b[i][j]); 
        }
        ans += ma * a[i]; 
    }
    cout << ans;
    return 0;
}
