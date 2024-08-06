// #include <bits/stdc++.h>

// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n"
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

// using namespace std;

// const int N = 1e5 + 5; 
// bool c[256] = {false}; // To track characters present in the string

// int solve() {
//     string s; 
//     cin >> s; 
//     int n = s.length();

//     for (char ch : s) {
//         c[ch] = true;
//     }

//     bool inserted = false; 

  
//     if (n == 1) {
//         char newChar = 'a'; 
        
//         while (c[newChar]) {
//             newChar++;
//         }
//         s.insert(s.begin(), newChar); 
//         p(s); 
//         return 0; 
//     }


//     rep(i, 1, n) {
//         if (s[i - 1] == s[i] && !inserted) {
//             char newChar = 'a'; 
           
//             while (c[newChar]) {
//                 newChar++;
//             }
           
//             s.insert(i, 1, newChar);
//             inserted = true; 
//             n++; 
//             c[newChar] = true; 
//             i++; 
//         }
//     }
    
//     p(s);
//     return 0;
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    int i = 0;
    int f = 0;
    for (; i < n - 1; i++) {
        if (s[i] == s[i + 1] && f == 0) {
            ans += s[i];
            if (s[i] == 'z') {
                ans += 'a';
            } else {
                ans += (s[i] + 1);
            }
            f = 1;
        } else {
            ans += s[i];
        }
    }
    ans += s[n - 1];
    if (f != 1) {
        if (s[n - 1] != 'z') {
            ans += (s[n - 1] + 1);
        } else {
            ans += 'a';
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}