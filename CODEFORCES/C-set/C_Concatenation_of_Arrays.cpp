#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p2(x, y)   cout << x << " " << y << " ";
const ll mod = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;

void fn() {
    ll n;
    cin >> n;
    
    vll arr1(n), arr2(n);
    rep(i, 0, n) {
        cin >> arr1[i] >> arr2[i];
    }
    
    auto exteq = [](const vll& first, const vll& second) -> set<ll> {
        set<ll> uqel;
        for(auto x : first) uqel.insert(x);
        for(auto x : second) uqel.insert(x);
        return uqel;
    };
    
    auto rnk = [](const set<ll>& uqvl) -> map<ll, ll> {
        map<ll, ll> elrnks;
        ll rnk = 1;
        for(auto val : uqvl) {
            elrnks[val] = rnk++;
        }
        return elrnks;
    };
    
    auto solv1 = [](const vll& first, const vll& second, 
                    const map<ll, ll>& ranks) -> vector<array<ll, 3>> {
        vector<array<ll, 3>> ar3;
        rep(i, 0, first.size()) {
            ar3.pb({ranks.at(first[i]) + ranks.at(second[i]), 
                          first[i], second[i]});
        }
        return ar3;
    };



    auto srres = [](vector<array<ll, 3>>& dt) {
        sort(all(dt), [](const array<ll, 3>& a, const array<ll, 3>& b) {
            if(a[0] != b[0]) return a[0] < b[0];
            return a[1] < b[1];
        });
    };
    
    auto solv2 = [](const vector<array<ll, 3>>& dt) {
        for(const auto& it2 : dt) {
            
            p2(it2[1] , it2[2] )
        }
        cout << "\n";
    };
    
    auto uqel = exteq(arr1, arr2);
    auto rkmap = rnk(uqel);
    auto res = solv1(arr1, arr2, rkmap);
    srres(res);
    solv2(res);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) fn();
    
    return 0;
}