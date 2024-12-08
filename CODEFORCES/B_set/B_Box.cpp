#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> q(n);
        for (int i = 0; i < n; ++i) {
            cin >> q[i];
        }

        vector<int> p(n);
        int prev = q[0];
        p[0] = prev;

        for (int i = 1; i < n; ++i) {
            int diff = q[i] - prev;
            if (diff > 1) {
                for (int j = prev + 1; j < q[i]; ++j) {
                    p[i] = j;
                    ++i;
                }
                if (i < n) {
                    p[i] = q[i];
                }
            } else if (diff == 1) {
                p[i] = q[i];
            } else {
                cout << -1 << endl;
                break;
            }
            prev = q[i];
        }

        if (p[n - 1] != 0) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}