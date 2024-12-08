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
        vector<int> arr(n);
        for (int i = 1; i <=n; ++i) {
            cin >> arr[i];
        }
        // Sort the array to find the largest and smallest numbers
        sort(arr.begin(), arr.end());
        vector<int> rearranged(n);
        int oddIndex = 0, evenIndex = 1;  // Updated oddIndex and evenIndex to start from 0 and 1
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                rearranged[evenIndex] = arr[i]; // Place smallest in even index
                evenIndex += 2;
            } else {
                rearranged[oddIndex] = arr[i]; // Place largest in odd index
                oddIndex += 2;
            }
        }
        long long sum = 0;
        for (int i = 1; i <=n; ++i) {
            if (i % 2 == 0) { // Add terms at even indices
                sum += rearranged[i];
            } else { // Subtract terms at odd indices
                sum -= rearranged[i];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
