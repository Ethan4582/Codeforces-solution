#include <iostream>
#include <vector>
#include <limits> // Added for INT_FAST32_MIN
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        vector<int> b;
        b.emplace_back(-1);
        for (int i = 0; i < n; i++) {
            if (a[i] != a[0])
                b.emplace_back(i);
        }
        b.emplace_back(n);
        if (b.size() == 2) { 
            cout << -1 << endl;
            continue;
        }
        int ans = INT_FAST32_MAX; 
        for (int j = 0; j < b.size() - 1; j++) { 
            ans = min(ans, b[j + 1] - b[j] - 1);
        }
        cout << ans << endl;
    }

    return 0;
}
