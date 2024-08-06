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
// #define p(a) cout << a << "\n";
// #define p2(a, b) cout << a << " " << b << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while(t--) {
//         int n; 
//         cin >> n; 
//         string s; 
//         cin >> s;

//         int cnta = 0, cntb = 0, cntc = 0, cntd = 0; 

       
//         rep(i, 0, s.length()) {
//             if (s[i] == 'A' && cnta < n) {
//                 cnta++;
//             } else if (s[i] == 'B' && cntb < n) {
//                 cntb++;
//             } else if (s[i] == 'C' && cntc < n) {
//                 cntc++;
//             } else if (s[i] == 'D' && cntd < n) {
//                 cntd++;
//             }
           
//         }

       
//         int ans = cnta + cntb + cntc + cntd;
//         p(ans); 
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while(t--) {
//         int n; 
//         cin >> n; 
//         string s; 
//         cin >> s;

     
//         unordered_map<char, int> count;

       
//         for (char c : s) {
            
//             if (c >= 'A' && c <= 'D') {
              
//                 if (count[c] < n) {
//                     count[c]++;
//                 }
//             }
//         }

       
//         int ans = 0;
//         for (char c = 'A'; c <= 'D'; ++c) {
//             ans += count[c]; 
//         }

//         cout << ans << "\n"; 
//     return 0;
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        for (char c : "ABCD") {
            ans += min(n, (int)count(s.begin(), s.end(), c));
        }
        cout << ans << "\n";
    }
    return 0;
}
