// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// bool matchesTemplate(const vector<int>& a, const string& s) {
//     if (a.size() != s.size()) return false;

//     unordered_map<int, char> numberToChar;
//     unordered_map<char, int> charToNumber;

//     for (size_t i = 0; i < a.size(); ++i) {
//         int num = a[i];
//         char ch = s[i];

//         if (numberToChar.count(num)) {
//             if (numberToChar[num] != ch) return false;
//         } else {
//             numberToChar[num] = ch;
//         }

//         if (charToNumber.count(ch)) {
//             if (charToNumber[ch] != num) return false;
//         } else {
//             charToNumber[ch] = num;
//         }
//     }

//     return true;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// int t ; 
// cin>>t ; 
// while(t--){
   
//     int n, m;
//     cin >> n ;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     cin>>m;
//     vector<string> strings(m);
//     for (int i = 0; i < m; ++i) {
//         cin >> strings[i];
//     }

//     for (const auto& s : strings) {
//         cout << (matchesTemplate(a, s) ? "YES" : "NO") << endl;
//     }
// }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 

bool matchesTemplate(const vi &a, const string &s) {
    unordered_map<int, char> mp1; 
    unordered_map<char, int> mp2; 

    rep(i, 0, s.size()) {
        int x = a[i]; 
        char c = s[i]; 

      
        if (!mp1.count(x)) {
            mp1[x] = c; 
        } else if (mp1[x] != c) {
            return false; // comflict of being with other charcter 
        }

       
        if (!mp2.count(c)) {
            mp2[c] = x; 
        } else if (mp2[c] != x) {
            return false; 
        }
    }
    return true; 
}

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        vi a(n); 
        rep(i, 0, n) {
            cin >> a[i];
        }

        int m; 
        cin >> m; 
        while (m--) {
            string s; 
            cin >> s;

            if (s.length() != n) {
                NO; 
            } else {
                
                cout << (matchesTemplate(a, s) ? "YES" : "NO") << endl;
            }
        }
    }
    return 0;
}
