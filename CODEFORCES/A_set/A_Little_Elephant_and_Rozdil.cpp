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
// #define SIEVE seive(); 

// using namespace std;

// const int N = 1000000; 
// int prime[N];
// vector<int> pr;


// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     unordered_map<int, vector<int>> mp;
//     int smallest = INT_MAX;

//     for (int i = 1; i <= n; ++i) {
//         int num;
//         cin >> num;
//         mp[num].push_back(i);
//         if (num < smallest) smallest = num;
//     }

//     for (auto it = mp.begin(); it != mp.end(); ++it) {
//         if (it->first == smallest) {
//             for (int idx : it->second) {
//                 cout << idx << " ";
//             }
//         }
//     }
//     cout << endl;

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
#define SIEVE seive(); 

using namespace std;



int main() {
    int n;
    cin >> n;

    unordered_map<int, vector<int>> mp;
    int smallest = INT_MAX;
    bool multiple_smallest = false;

    for (int i = 1; i <= n; ++i) {
        int num;
        cin >> num;
        mp[num].push_back(i);
        if (num < smallest) {
            smallest = num;
            multiple_smallest = false;
        } else if (num == smallest) {
            multiple_smallest = true;
        }
    }

    if (multiple_smallest) {
        cout << "Still Rozdil" << endl;
    } else {
        
        for (int idx : mp[smallest]) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
