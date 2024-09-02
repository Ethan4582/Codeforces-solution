#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL);

using namespace std;

int main() {
    fast;
    int t; 
    cin >> t; 
    while (t--) {
        int x, y;
        cin >> x >> y;

        int s = x + 2 * y;
        if (s % 2 == 0) {
            int h = s / 2;
            bool z = (h % 2 == 0) || (h % 2 == 1 && x >= 2);
            z ? cout << "YES\n" : cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
