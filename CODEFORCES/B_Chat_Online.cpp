#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<int> t(2010, 0); // Initialize array for levels passed by Little X

    // Process Little X's levels
    for (int i = 0; i < p; ++i) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; ++j)
            t[j] = 1; // Mark levels passed by Little X
    }

    // Process Little Y's levels
    vector<int> c(q), d(q);
    for (int i = 0; i < q; ++i)
        cin >> c[i] >> d[i];

    int ans = 0; // Initialize counter for valid time intervals

    // Check time intervals [l, r]
    for (int i = l; i <= r; ++i) {
        bool flag = true;
        for (int j = 0; j < q && flag; ++j) {
            for (int k = c[j] + i; k <= d[j] + i; ++k) {
                if (t[k]) { // If Little X passed a level during this time interval
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
            ans++; // Increment counter if both Little X and Little Y can pass all levels
    }

    cout << ans << endl; // Output the result
    return 0;
}
