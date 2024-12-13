#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    ll n; 
    cin >> n; 
    map<ll, ll> frequency; 
    rep(i, 0, n) {
        ll k; 
        cin >> k;
        frequency[k]++; 
    }

    ll totalPairs = n * (n - 1) / 2; 
    ll samePairs = 0;

    for (auto& entry : frequency) {
        ll count = entry.second;
        if (count > 1) {
            samePairs += (count * (count - 1)) / 2; 
        }
    }

    ll result = totalPairs - samePairs; 
    p(result);

    return 0;
}
