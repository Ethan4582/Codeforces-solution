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


// pi  check(vector<pi>& pr, ll& ans, int& nersumadd) {
//    pi smallest = {INT_MAX, INT_MAX};
//    int idx = -1;
//    int mn_second = INT_MAX;
   
//    // Find minimu second value
//    for(auto p : pr) {
//        mn_second = min(mn_second, p.second);
//    }
   
//    // Find smallest first value among pairs with smallest second value
//    for(int i = 0; i < pr.size(); i++) {
//        if(pr[i].second == mn_second && pr[i].first < smallest.first) {
//            smallest = pr[i];
//            idx = i;
//        }
//    }
   
//    ans += smallest.first;
//    nersumadd = smallest.second;
   
//    return {idx, nersumadd}; 
// }

// int main() {
//    fastread();
//    int t;
//    cin >> t;
//    while(t--) {
//        int n;
//        cin >> n;
//        vector<pi> pr(n);
//        rep(i, 0 , n){
//            cin >> pr[i].first;
//        }
//        rep(i, 0 , n){
//            cin >> pr[i].second; 
//        }
       
//        ll ans = 0;
//        while(!pr.empty()) {
//            int nersumadd = 0;
//            auto [idx, add] = check(pr, ans, nersumadd);
           
//            if(idx > 0) {
//                pr[idx-1].first+= nersumadd;
//            }
//            if(idx < pr.size()-1) {
//                pr[idx+1].first += nersumadd; 
//            }
           
//            pr.erase(pr.begin() + idx);
//        }
       
//       p(ans)
//    }
//    return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       long long sum = 0;
       int maxB = 0;
       
       for(int i = 0; i < n; i++) {
           int x;
           cin >> x;
           sum += x;
       }
       
       for(int i = 0; i < n; i++) {
           int x;
           cin >> x;
           maxB = max(maxB, x);
           sum += x;
       }
       
       sum -= maxB;
       cout << sum << "\n";
   }
   return 0;
}