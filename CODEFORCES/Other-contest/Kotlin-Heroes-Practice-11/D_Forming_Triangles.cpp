#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of sticks
        vector<int> s(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> s[i]; // Input lengths of the sticks
        }

        // Sort the stick lengths
        sort(s.begin(), s.end());
        
        // Total combinations of 3 sticks
        long long ans = (n * (n - 1) * (n - 2)) / 6; 
        int j = 0;

        for (int i = 0; i < n; ++i) {
            // Find how many elements are less than s[i]
            while (j < n && s[j] < s[i]) {
                j++;
            }
            // Subtract the invalid combinations
            ans -= (j * (j - 1)) / 2;
        }

        cout << ans << endl; // Output the result
    }
    return 0;
}
