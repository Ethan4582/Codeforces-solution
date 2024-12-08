


#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n"
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

using namespace std;



int main() {
    int t; 
    cin >> t;

    while (t--) {
     
         int n ; 
              cin>>n; 
              vector<ll> a(n);
              rep( i ,0 ,n){cin>>a[i];}

      
        int mx = *max_element(a.begin(), a.end()); 
        int mx2 = INT_MIN; 

        for (int i = 0; i < n; ++i) {
            if (a[i] != mx) {
                mx2 = max(mx2, a[i]);
            }
        }

      
        if ((n - 1) % 2 == 0) {
           p(mx + ((n + 1) / 2));
        } else {
            p(max(mx + (n / 2), mx2 + ((n + 1) / 2)) );
        }
    }

    return 0;
}
// int main() {
//     fastread();
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> ar(n);
//         rep(i, 0, n) cin >> ar[i];

//         auto check = [&](int str) {
//             int mxvl = 0, cnt = 0;
//             for (int i = str; i < n; i += 2) {
//                 mxvl = max(mxvl, ar[i]);
//                 cnt++;
//             }
//             return mxvl + cnt;
//         };

//         int ans = max(check(0), check(1));
//         p(ans);
//     }
//     return 0;
// }
