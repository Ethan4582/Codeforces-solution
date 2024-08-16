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

using namespace std;

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        
        vll a(n);
        rep(i, 0, n) {
            cin >> a[i];
        }

        vll b(n);
        rep(i, 0, n) {
            cin >> b[i];
        }

        
        vll rev_b = b; 
        reverse(all(rev_b)); 

      
        bool ans = (a == b || a == rev_b);

       
        if (ans) {
           p("Bob");
        } else {
           
              p("Alice");
        }
    }
    return 0;
}
