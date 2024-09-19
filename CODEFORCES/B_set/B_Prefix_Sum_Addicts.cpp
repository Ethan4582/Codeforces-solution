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
bool c[N]; 

void solve() {
    int n, k;
    cin >> n >> k;

    vll s(n + 1);
    
    
    for (int i = n - k + 1; i <= n; ++i) {
        cin >> s[i];
    }

   
    if (k == 1) {
     YES
        return;
    }

    vll a(n + 1);
   
    for (int i = n - k + 2; i <= n; ++i) {
        a[i] = s[i] - s[i - 1];
    }

    if (!std::is_sorted(a.begin() + n - k + 2, a.begin() + n + 1)) {
    NO
        return;
    }

    if (s[n - k + 1] > a[n - k + 2] * (n - k + 1)) {
        NO
        return;
    }

  YES
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}











// class Solution {
// public:
//     bool findSafeWalk(vector<vector<int>>& grid, int health) {
//         int m = grid.size();
//         int n = grid[0].size();
        
    
//         vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
     
//         queue<pair<int, int>> q;
//         q.push({0, 0});
        
      
//         vector<vector<bool>> visited(m, vector<bool>(n, false));
//         visited[0][0] = true;

//         while (!q.empty()) {
//             auto [x, y] = q.front();
//             q.pop();
            
          
//             if (x == m - 1 && y == n - 1) {
//                 return true;
//             }
            
          
//             for (const auto& dir : directions) {
//                 int newX = x + dir.first;
//                 int newY = y + dir.second;
                
              
//                 if (newX >= 0 && newX < m && newY >= 0 && newY < n) {     
//                     int newHealth = health - grid[newX][newY];
                    
             
//                     if (newHealth > 0 && !visited[newX][newY]) {
//                         visited[newX][newY] = true; /
//                         q.push({newX, newY}); 
//                     }
//                 }
//             }
//         }
        
//           return false;
//     }
// };

