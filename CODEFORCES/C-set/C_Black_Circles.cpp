// #include <bits/stdc++.h>
// #define ll long long
// #define vpii vector<pair<int, int>>
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// // Function to calculate the Euclidean distance
// double distance(int x1, int y1, int x2, int y2) {
//     return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
// }

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         int n; 
//         cin >> n; 
//         vector<pair<int, int>> circles(n);

       
//         for (int i = 0; i < n; ++i) {
//             cin >> circles[i].first >> circles[i].second;
//         }

//         int xs, ys, xt, yt; 
//         cin >> xs >> ys >> xt >> yt; 

       
//         double distanceToTarget = distance(xs, ys, xt, yt);

//         bool canReach = true; 

       
//         for (const auto& circle : circles) {
//             int cx = circle.first;
//             int cy = circle.second;

           
//             double distanceToCircleCenter = distance(xt, yt, cx, cy);

           
//             if (distanceToCircleCenter <= distanceToTarget) {
//                 canReach = false; 
//                 break;
//             }
//         }

        
//         if (canReach) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int t = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

    for (int i = 0; i < n; i++) {
        int d = (a[i].first - x2) * (a[i].first - x2) + (a[i].second - y2) * (a[i].second - y2);

        if (d <= t) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int32_t main() {
    fastIO;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
