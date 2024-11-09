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

int main() {
    fastread();
    int t; 
    cin >> t; 
    auto solv = [](int n) {
        int pc = 0, mv = 1;  bool st = true;
        
        while (abs(pc) <= n) {
            pc += st ? -mv : mv;
         mv += 2;
         st = !st;
        }
        
        return st ? "Kosuke" : "Sakurako";
    };

    while (t--) {
        int n; 
        cin >> n; 
        p(solv(n));
    }
    return 0;
}
