#include <bits/stdc++.h>
#define p(a) cout << a << "\n";
#define rep(i, a, n) for (int i = a; i < n; i++)

using namespace std;

int findUniqueElementIndex(const vector<int>& arr, int n) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if ((mid == 0 || arr[mid] != arr[mid - 1]) && (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            return mid;
        } else if (arr[mid] == arr[0]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1; // Unique element not found
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        rep(i, 0, n) {
            cin >> arr[i];
        }

        int uniqueIndex = findUniqueElementIndex(arr, n);
        p(uniqueIndex + 1); // Adding 1 to convert to 1-based indexing
    }

    return 0;
}



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

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; ++i) {
            if (count(arr.begin(), arr.end(), arr[i]) == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
