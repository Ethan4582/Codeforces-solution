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


// int GCD(int a, int b) {
//     return b == 0 ? a : GCD(b, a % b);
// }

// int power(int x, int y, int MOD) {
//     if (y == 0) {
//         return 1;
//     }
//     if (y % 2 == 0) {
//         return power((x * x) % MOD, y / 2, MOD) % MOD;
//     } else {
//         return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
//     }
// }

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
// #define SIEVE seive(); 

// using namespace std;

// const int N = 1000000; 
// int prime[N];
// vector<int> pr;


// int main() {
//     fastread();
//     string s; 
//     getline(cin , s); 

//     size_t pos;
//     while ((pos = s.find("WUB")) != string::npos) {
//         s.replace(pos, 3, " "); 
//     }

//       size_t start = s.find_first_not_of(" ");
//     size_t end = s.find_last_not_of(" ");
//     string result = (start == string::npos || end == string::npos) ? "" : s.substr(start, end - start + 1);

    
//     cout << result << endl;

//     return 0;
// }
  

  

  #include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s); 

    
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == 'W' && i + 2 < s.length() && s[i + 1] == 'U' && s[i + 2] == 'B') {
            s[i] = ' ';
            s[i + 1] = ' ';
            s[i + 2] = ' ';
        }
    }

   
    size_t start = 0;
    while (start < s.length() && s[start] == ' ') {
        start++;
    }

    
    size_t end = s.length() - 1;
    while (end >= 0 && s[end] == ' ') {
        end--;
    }

    
    for (size_t i = start; i <= end; ++i) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
