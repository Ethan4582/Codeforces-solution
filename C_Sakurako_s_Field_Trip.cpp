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
vi arr;


void solve() {
    int n; cin >> n;
    arr = vi(n + 3);
    for(int i = 1; i <= n; i++) 
        cin >> arr[i];
        
   
    auto cksolv = [&](const int idx) -> bool {
        return (
            arr[idx] == arr[idx - 1] ||  
        arr[n - idx + 1] == arr[n - idx + 2]
        );
    };
        
  
    auto ck2 = [&]() -> void {
        for(int i = 2; i <= n/2; i++) {
            if(cksolv(i)) {
                const int j = n - i + 1;
                arr[i] ^= arr[j]; arr[j] ^= arr[i];  arr[i] ^= arr[j];
            }
        }
    };
        
    auto ans = [&]() -> int {
        int cnt = 0;
        for(int i = 1; i < n; i++)
            cnt += (arr[i] == arr[i + 1]);
        return cnt;
    };
        
    
    ck2();
    p(ans());
}


int main() {
   
    int t = 0;
    cin >> t;
    while(t-- > 0) {
        solve();
    }
    
    return 0;
}