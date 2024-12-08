// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define f first
// #define s second
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n"
// #define p2(a, b) cout << a << " " << b << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// ll prefix_sum[N];

// bool check(int a, int b, vll k) {
//     int target = a + b;
//     unordered_set<ll> seen;
//     for (int i = 0; i < k.size(); ++i) {
//         if (seen.count(target - k[i])) {
//             return true;
//         }
//         seen.insert(k[i]);
//     }
//     return false;
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         int n, q; 
//         cin >> n >> q; 
//         vll a(n);
//         rep(i, 0, n) {
//             cin >> a[i];
//         }
//         while (q--) {
//             int c, d; 
//             cin >> c >> d; 
//             if (check(c, d, a)) {
//                 YES;
//             } else {
//                 NO;
//             }
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define f first
// #define s second
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n"
// #define p2(a, b) cout << a << " " << b << "\n"
// #define YES cout << "YES\n"
// #define NO cout << "NO\n"

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// using namespace std;

// bool check(int k, int c, vll &a) {
//     k--; 
//     c--;
    
//     int len = c - k + 1; 
  
//     vll rev_segment(a.begin() + k, a.begin() + c + 1);
//     reverse(all(rev_segment));
    
//     return equal(rev_segment.begin(), rev_segment.end(), a.begin() + k);
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         int n, q; 
//         cin >> n >> q; 
//         vll a(n);
//         rep(i, 0, n) {
//             cin >> a[i];
//         }
//         while (q--) {
//             int c, d; 
//             cin >> c >> d; 
//             if (check(c, d, a)) {
//                 NO;
//             } else {
//                 YES;
//             }
//         }
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

void fastread() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastread();
    
    int t;
    cin >> t; 
    while (t--) {
        int n, q;
        cin >> n >> q; 

        vector<ll> a(n);
        vector<ll> prefixSum(n), countOnes(n);

      
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefixSum[i] = a[i]; 
            countOnes[i] = (a[i] == 1); 
        }

       
        for (int i = 1; i < n; i++) {
            prefixSum[i] += prefixSum[i - 1];
            countOnes[i] += countOnes[i - 1];
        }

       
        while (q--) {
            ll l, r;
            cin >> l >> r; 
            l--, r--; 

            if (l == r) {
                cout << "NO\n"; 
                continue;
            }

            ll totalSum = prefixSum[r]; 
            ll totalOnes = countOnes[r]; 

            if (l > 0) {
                totalSum -= prefixSum[l - 1]; 
                totalOnes -= countOnes[l - 1]; 
            }

            totalSum -= 2 * totalOnes; 

            ll remainingElements = r - l + 1 - totalOnes; 

         
            if (totalSum >= remainingElements) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
