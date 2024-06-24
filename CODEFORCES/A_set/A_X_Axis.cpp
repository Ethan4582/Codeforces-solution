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


// const ll mod = 1e9 + 7;


// using namespace std;


// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int x1, x2, x3;
//         cin >> x1 >> x2 >> x3;

//         int coords[3] = {x1, x2, x3};

//         sort(coords, coords + 3);

      
//         int median = coords[1];

      
//         int total_distance = abs(median - x1) + abs(median - x2) + abs(median - x3);

      
//        p(total_distance);
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


const ll mod = 1e9 + 7;


using namespace std;

int main() {
    
    int t ; 
    cin >>t ; 
    while(t--){
        
        
                vector<int> a(3); 
                for (int i = 0; i < 3; ++i) {
                    cin >> a[i]; 
                }

                sort(all(a));
                int ans = abs(a[0]-a[1])+abs(a[1]-a[1])+abs(a[2]-a[1]);
                p(ans);
   
  }
    return 0;
}