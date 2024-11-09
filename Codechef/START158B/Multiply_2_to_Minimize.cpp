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
#define p(a) cout << a << " ";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

void solve() {
   int n;
   cin >> n;
   
   auto solv = [&]() {
       set<long long> qu;
       for (int i = 0; i < n; i++) {
           long long nm;
           cin >> nm;
           while (qu.count(nm)) {
               qu.erase(qu.find(nm));
               nm += nm;
           }
           qu.insert(nm);
           p( qu.size())
       }
       cout << "\n";
   };
   
   solv();
}

int main() {
    fastread() 
   int t;
   cin >> t;
   while (t--) {
       solve();
   }
   
   return 0;
}