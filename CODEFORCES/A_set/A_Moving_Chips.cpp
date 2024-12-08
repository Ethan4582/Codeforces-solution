// // #include <bits/stdc++.h>
// // #define ll long long
// // #define vll vector<ll>
// // #define rep(i, a, n) for (int i = a; i < n; ++i)
// // #define p(a) cout << a << "\n"
// // #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// // using namespace std;

// // int main() {
// //     fastread();
// //     int t; 
// //     cin >> t; 
// //     while(t--) {
// //         int n; 
// //         cin >> n; 
// //         vll a(n);
// //         rep(i, 0, n) {
// //             cin >> a[i];
// //         }

       
// //         int count_of_ones = count(a.begin(), a.end(), 1);

// //         if (count_of_ones == 0 || count_of_ones == 1) {
// //             p(0);
            
// //         }else{
// //   vll b;
// //         rep(i, 1, n - 1) {
// //             if ((a[i - 1] == 1 && a[i] == 0) || 
// //                 (a[i] == 0 && a[i - 1] == 0 && a[i + 1] == 0) || 
// //                 (a[i - 1] == 0 && a[i] == 0 && a[i + 1] == 1)) {
// //                 b.push_back(a[i]);
// //             }
// //         }

// //         p(b.size());
// //         }

      
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// #define ll long long
// #define vll vector<ll>
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n"
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while(t--) {
//         int n; 
//         cin >> n; 
//         vll a(n);
//         rep(i, 0, n) {
//             cin >> a[i];
//         }

//         int cnt_1 = count(a.begin(), a.end(), 1);

//         if (cnt_1 == 0|| cnt_1 == 1) {
//             p(0);
//             continue; 
//         } 

//         int l = find(a.begin(), a.end(), 1) - a.begin(); 
//         int r = n - (find(a.rbegin(), a.rend(), 1) - a.rbegin()) - 1; 

//         p(r - l - cnt_1 + 1);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
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

        int ans = 0, one_count = 0, total_ones = count(a.begin(), a.end(), 1);

        for (int i = 0; i < n; ++i) {
            if (one_count) ans += (a[i] == 0);
            one_count += (a[i] == 1);
            if (one_count == total_ones) break;
        }

        cout << ans << "\n";
    }
    return 0;
}
