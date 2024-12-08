#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        const int medIdx = (n + 1) / 2 - 1;
        int idx = medIdx;
        int count = 0; // Initialize count variable to 0
        while (idx < n && a[idx] == a[medIdx]) {
            count++; // Increment count if element equals median
            idx++;
        }

        cout << count << endl; // Print the count instead of idx - medIdx
    }

    return 0;
}
