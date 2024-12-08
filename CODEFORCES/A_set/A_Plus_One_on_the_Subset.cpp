#include <bits/stdc++.h>
#include <unordered_set>
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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;


int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){

   int k ;
   cin >>k ;
 
         vector<int> a(k); 
         for (int i = 0; i < k; ++i) {
             cin >> a[i]; 
         }
   int maxi= *max_element(all (a));
   int mani= *min_element(all (a));
   p(maxi - mani) ;
  }
    return 0;
}