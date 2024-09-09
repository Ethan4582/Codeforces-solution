#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, f, L, F;
    cin >> l >> f >> L >> F;
    // NO interaction
    if (l > F || L > f) {
        cout << "1\n";
    } else if (l == L && f == F) { //  closed all the door 
        cout << f - l << '\n';
    } else {
        int left = max(l, L);
        int right = min(f, F);
        int result = right - left + 2;
        if (l == L) result--;
        if (f == F) result--;
        cout << result << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}



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

// int a[N]; 
// bool c[N]; 


// int solve(){
//        int l, f, L, F;
//     cin >> l >> f >> L >> F;
//     // NO interaction
//     if (l > F || L > f) {
//         cout << "1\n";
//     } else if (l == L && f == F) { //  closed all the door 
//         cout << f - l << '\n';
//     } else {
//         int left = max(l, L);
//         int right = min(f, F);
//         int result = right - left + 2;
//         if (l == L) result--;
//         if (f == F) result--;
//         cout << result << '\n';
//     }
// }

// int main() {
//     fastread();
//     int t ; 
//     cin >>t ; 
//     while(t--){
//         solve();
   
//   }
//     return 0;
// }