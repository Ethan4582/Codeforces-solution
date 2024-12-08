// #include <iostream>
// #include <vector>

// using namespace std;

// bool isComposite(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) return true;
//     }
//     return false;
// }

// pair<int, int> findCompositePair(int n) {
//     for (int x = 4; x <= n / 2; ++x) {
//         if (isComposite(x)) {
//             int y = n - x;
//             if (isComposite(y)) {
//                 return {x, y};
//             }
//         }
//     }
//     return {-1, -1}; // If no valid pair is found
// }




// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; i++)
// #define p(a) cout << a << "\n";
// #define p2(a, b) cout << a << " " << b << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// bool iscomposite(int x) {
//     if (x <= 1) return false;
//     for (int i = 2; i * i <= x; i++) {
//         if (x % i == 0) return true;
//     }
//     return false;
// }

// int main() {
//     fastread();
//     int n;
//     cin >> n;

//     for (int i = 4; i < n / 2; i++) {
//         if (iscomposite(i)) {
//             int y = n - i;
//             if (iscomposite(y)) {
//                 p2(i, y);
//                 break; 
//             }
//         }
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isComposite(int x) {
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 4; i <= n / 2; ++i) {
        if (isComposite(i) && isComposite(n - i)) {
            cout << i << " " << n - i << endl;
            break;
        }
    }

    return 0;
}

