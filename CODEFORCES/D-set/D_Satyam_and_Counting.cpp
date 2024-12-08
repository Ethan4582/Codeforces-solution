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


// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

       
//         vector<pair<int, int>> ps(n);
//         for (int i = 0; i < n; i++) {
//             cin >> ps[i].first >> ps[i].second; 
//         }

       
//         int ans = 0;
//         for (const auto& pis : ps) {
//             if (pis.second == 1) {
//                 ans++;
//             }
//         }

       
//      p(ans * 2 )
//     }
//     return 0;
// }






// #include<iostream>
// #include<vector>
// using namespace std;



// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//        int ycount = 0;
//         int x,y;
//         for(int i=0;i<n;i++){
//              int x,y;
//             cin >> x;
//             cin >> y;
          
//             if(y == 1){
//                 ycount++;
//             }
//         }
//         cout << ycount*2  << endl;

//     }
    
// } 




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int p = 1000000007;
// #define ANTIHACK(x,k) ((x-k) + ((b1^86)==134))

// int32_t main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(NULL);

//     int a1;
//     cin >> a1;
//     L1:
//     while (a1--) {
//         int b1;
//         cin >> b1;
//         set<int> c1, d1;
//         for (int e1=0; e1<b1; e1++) {
//             int f1, g1;
//             cin >> f1 >> g1;
//             if (g1 == 0) {
//                 c1.insert(f1);
//             } else {
//                 d1.insert(f1);
//             }
//         }
//         int h1 = p;
//         for (int i1 : c1) {
//             if (d1.find(i1) != d1.end()) {
//                 h1 += d1.size() + c1.size() - 2;
//             }
//         }

//         for (int j1 : c1) {
//             if (d1.find(j1+1) != d1.end() and c1.find(j1+2) != c1.end()) {
//                 h1 += 1;
//             }
//         }

//         for (int k1 : d1) {
//             if (c1.find(k1-1) != c1.end() and d1.find(k1-2) != d1.end()) {
//                 h1 += 1;
//             }
//         }

//         cout << ANTIHACK(h1, p) << endl;
//     }

//     return 0;
// }








// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int countTriangles(int n, unordered_set<int>& y0, unordered_set<int>& y1) {
//     // Count valid triangles
//     int count = 0;
    
//     // Triangles with two points on y=0 and one on y=1
//     count += y0.size() * (y0.size() - 1) / 2 * y1.size();

//     // Triangles with two points on y=1 and one on y=0
//     count += y1.size() * (y1.size() - 1) / 2 * y0.size();

//     return count;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;

//         unordered_set<int> y0;  // Points with y = 0
//         unordered_set<int> y1;  // Points with y = 1

//         for (int i = 0; i < n; ++i) {
//             int x, y;
//             cin >> x >> y;
//             if (y == 0) {
//                 y0.insert(x);
//             } else {
//                 y1.insert(x);
//             }
//         }

//         cout << countTriangles(n, y0, y1) << '\n';
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> nums(n);
        map<int, int> count_x;
        set<pair<int, int>> unique_points;
        
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            nums[i] = {x, y};
            count_x[x]++;
            unique_points.insert({x, y});
        }
        
        long long ans = 0; 
        
        for (const auto& [x, cnt] : count_x) {
            if (cnt == 2) {
                ans += n - 2; 
            }
        }
        
        for (const auto& p : unique_points) {
            int x = p.first, y = p.second;
            if (unique_points.count({x - 1, y ^ 1}) && unique_points.count({x + 1, y ^ 1})) {
                ans += 1;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
