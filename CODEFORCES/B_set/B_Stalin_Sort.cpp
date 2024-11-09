#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int> 
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
    
    while(t--) {
        int n;
        cin >> n;
        vi arr(n + 1);
        rep(i, 1, n + 1) {
            cin >> arr[i];
        }
        
        auto solv = [](const vi& seq, int size) -> int {
            const int MAXVAL = 1e9 + 7;
            
            auto solv2 = [&seq](int stpos, int len) -> int {
                int cstbeps = stpos - 1;
                int cstftpos = 0;
                
                for(int idx = stpos + 1; idx <= len; ++idx) {
                    if(seq[idx] > seq[stpos]) {
                        cstftpos++;
                    }
                }
                
                return cstbeps + cstftpos;
            };
            
            int res = MAXVAL;
            for(int pos = 1; pos <= size; ++pos) {
                res = min(res, solv2(pos, size));
            }
            
            return res;
        };
        
        p(solv(arr, n));
    }
    return 0;
}
