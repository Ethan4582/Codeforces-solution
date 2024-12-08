#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t = 1; 

    while (t-- > 0) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int count = 1;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == a[i + 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count > (n + 1) / 2) {
                cout << "NO" << endl;
                return 0;
            }
        }

        cout << "YES" << endl;
    }

    return 0;
}
