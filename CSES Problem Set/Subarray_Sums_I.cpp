#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<long long > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0, sum = 0;
    int start = 0, end = 0;

    while (end < n) {
        sum += a[end];
        while (start <= end && sum > x) {
            sum -= a[start];
            start++;
        }
        if (sum == x) {
            count++;
        }
        end++;
    }

    cout << count << endl;

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     vector<long long> prefixSum(n + 1, 0);
//     for (int i = 1; i <= n; i++) {
//         prefixSum[i] = prefixSum[i - 1] + a[i - 1];
//     }

//     unordered_map<long long, int> freq;
//     int count = 0;

//     for (int i = 0; i <= n; i++) {
//         count += freq[prefixSum[i] - x];
//         freq[prefixSum[i]]++;
//     }

//     cout << count << endl;

//     return 0;
// }

