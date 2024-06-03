#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxOnes = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < n; k++) {
                if (k >= i && k <= j) {
                    cnt += 1 - a[k];
                    
                } else {
                    cnt += a[k];
                }
            }
            maxOnes = max(maxOnes, cnt);
        }
    }

    cout << maxOnes << endl;

    return 0;
}
