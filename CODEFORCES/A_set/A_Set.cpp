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


// int cntmultipw(int x, int l, int r) {
//    return r/x - (l-1)/x;
    
// }

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int l, r, k;
//         cin >> l >> r >> k;
       
//         set<int> st;
//         for (int i = l; i <= r; ++i) {
//             st.insert(i);
//         }
        
//         int ans = 0;
        
        
//         while (!st.empty()) {
//             bool found = false;
//             for (auto it = st.begin(); it != st.end(); ++it) {
//                 int x = *it;
//                 if (cntmultipw(x, l, r) >= k) {
//                     st.erase(x);
//                     ++ans;
//                     found = true;
//                     break;
//                 }
//             }
//             if (!found) break; // to break of while
//         }
        
        
//        p(ans)
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define p(a) cout << a << "\n";

int countMultiples(int x, int l, int r) {
    return r / x - (l - 1) / x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll l, r, k; cin >> l >> r >> k;
 
    ll left = l, right = r;
 
    while (left <= right) {
        ll m = (left + right) / 2;
        if (r / m - (l - 1) / m >= k) {
            left = m + 1;
        }else right = m - 1;
    }
 
    p(left - l )
    }

    return 0;
}




// void solve() {
// 	int l, r, k; cin >> l >> r >> k;
// 	cout << max(r / k - l + 1, 0) << endl;
// 	return;
// }
 
// int main() {
// 	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// 	cin >> T;
// 	while (T--) {
// 		solve();
// 	}
// }