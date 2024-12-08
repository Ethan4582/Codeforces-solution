// #include<bits/stdc++.h>
// #define ll              long long
// #define ull             unsigned long long
// #define pb              push_back
// #define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL))
// using namespace std;

// int main()
// {
//     fastread();
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         bool possible = true;
//         for (int i = 0; i < n - 1; ++i) { // Iterate from the front of the array
//             if (a[i] > a[i + 1]) { // Change condition to check if current element is greater than the next one
//                 possible = false;
//                 break;
//             }
//         }

//         cout << (possible ? "YES" : "NO") << endl;
//     }

//     return 0;
// }


/// BRute FOrce 


#include <iostream>
#include <vector>
using namespace std;

bool isNonDecreasing(vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

bool canSort(vector<int>& arr) {
    while (!isNonDecreasing(arr)) {
        bool changed = false;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] >= 10) {
                int num = arr[i];
                arr.erase(arr.begin() + i);
                while (num > 0) {
                    arr.insert(arr.begin() + i, num % 10);
                    num /= 10;
                }
                changed = true;
                break;
            }
        }
        if (!changed) {
            return false;
        }
    }
    return true;
}

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
        if (canSort(arr)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}






///Dynamic progeamimng 





