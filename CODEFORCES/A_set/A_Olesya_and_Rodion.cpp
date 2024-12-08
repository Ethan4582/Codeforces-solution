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
    
   int n, t;
   string ans = ""; 
   cin >> n >> t;
   
   if (t == 10) {
      if (n == 1) {
         p(-1);
      } else {
         rep(i, 0, n-1) {
            ans += "1";
         }
         ans += "0";
         p(ans);
      }
   } else {
      rep(i, 0, n) {
         ans += to_string(t);
      }
      p(ans);
   }

   return 0;
}
