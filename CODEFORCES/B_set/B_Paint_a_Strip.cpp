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

// At least 2 for choice idx - 4, 5 as it makes sum >= n/2 - 1, 1 can katha hai  
// Every time I increase, I need step -1 time rest as 2 steps cover the above condition if cross n then break and then cnt
int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        int idx = 1;
        int smofidx = 1; 
        // Jump to 4 ... continue 
        for (int ans = 1; ; ans++) {
            if (smofidx >= n) {
                p(ans);
                break;
            }
            smofidx = smofidx * 2 + 2; 
        }
    }
    return 0;
}
