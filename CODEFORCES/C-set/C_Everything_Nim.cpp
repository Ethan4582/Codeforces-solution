#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int maxsize = *max_element(a.begin(), a.end());

        sort(a.begin(), a.end());
        int mexsize = 1;
        for (int sz : a) {
            if (sz == mexsize) {
                mexsize++;
            }
        }

        if (mexsize > maxsize) {
            cout << (maxsize % 2 == 1 ? "Alice" : "Bob") << endl;
        } else {
            cout << (mexsize % 2 == 1 ? "Alice" : "Bob") << endl;
        }
    }

    return 0;
}
