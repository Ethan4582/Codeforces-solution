#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == m * n) {
                    b[i][j] = 1;
                } else b[i][j] = a[i][j] + 1;
            }
        }
        if (n == 1 && m == 1) cout << -1 << '\n';
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << b[i][j] << " ";
                }
                cout << '\n';
            }
        }
    }
}