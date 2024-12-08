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
    
    auto evenhai = [](int len) {
        string res;
        for(int i = 0; i < (len/2)-1; i++) res += "33";
        return res + "66";
    };
    
    
    auto oddhai = [](int len) {
        string res(len-5, '3');
        return res + "36366";
    };
    
    while(t--) {
        int x;
        cin >> x;
        
        auto solv = [&]() -> string {
            if(x == 1 || x == 3) return "-1";
            return (x % 2 == 0) ? evenhai(x) : oddhai(x);
        };
        
       p(solv() );
    }
    return 0;
}