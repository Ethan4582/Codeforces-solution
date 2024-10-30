#include <bits/stdc++.h>
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

#define fastread()  (ios_base::sync_with_stdio(false), cin.tie(NULL));

#define clhrz auto horz = [](ll clnct, ll tcnt) -> ll { return clnct - tcnt; }
#define rowmv auto rempow = [](ll ttrw, ll crrw, ll clnct) -> ll { return (ttrw - crrw) * (clnct - 1); }
#define mov auto fulmv = [](ll rwlef, ll ttclm) -> ll { return rwlef * ttclm; }


using namespace std;

int main() {
   fastread()
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll gdrw, gcls, inrw, cl;
        cin >> gdrw >> gcls >> inrw >> cl;
        
        clhrz;
        rowmv;
        mov;
        
        auto solv = [&]() -> ll {
            ll res = 0;
            auto solv2 = gdrw - inrw;
            
            res += horz(gcls, cl);
            res += rempow(gdrw, inrw, gcls);
            res += fulmv(solv2, gcls);
            
            return res;
        };
        
        cout << solv() << '\n';
    }
    
    return 0;
}