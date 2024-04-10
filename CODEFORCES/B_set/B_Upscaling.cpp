#include <bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define rep(i,a,n)      for (int i=a;i<n;i++)
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
               if ((i / 2 + j / 2) % 2 == 0) {
                    cout << '#';
                } else {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
