// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long l, r;
//         cin >> l >> r;
//         long long diff = r - l;
//         long long k = 0;
        
//         while (k * (k + 1) / 2 <= diff) {
//             k++;
//         }
        
//         cout << k << endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long cnt = 0;
        long long curr = l;
        long long diff = 1; 

        while (curr <= r) {
            cnt++; 
            curr += diff; 
            diff++; 
        }

        cout << cnt << endl;
    }
    return 0;
}
