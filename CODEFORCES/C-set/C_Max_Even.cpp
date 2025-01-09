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
    int n;
    cin >> n;
    vll even, odd;

    rep(i, 0, n) {
        int k;
        cin >> k;
        if (k % 2 != 0) {
            odd.push_back(k); 
        } else {
            even.push_back(k);
        }
    }

    if (odd.size() <= 1 && even.size() <= 1) {
        p(-1);
    } else {
        ll max1 = odd.size() > 1 ? odd[odd.size() - 1] + odd[odd.size() - 2] : LLONG_MIN;
        ll max2 = even.size() > 1 ? even[even.size() - 1] + even[even.size() - 2] : LLONG_MIN;
        ll ans = max(max1, max2);
        p(ans);
    }

    return 0;
}
