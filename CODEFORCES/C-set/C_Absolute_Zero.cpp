#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

ll a[N]; 
bool c[N]; 

void solve() {
    ll n, cnt = 0;
    cin >> n;
    vll arr(n);
    vll ans;

    bool has_odd = false, has_even = false;

    rep(i, 0, n) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) has_even = true;
        else has_odd = true;
    }

    if (has_odd && has_even) {
        p(-1);
        return;
    }

    sort(all(arr));

    if (arr[n - 1] == 0) {
        p(0);
        cout << "\n";
    } else {
        while (arr[n - 1] != 0) {
            cnt++;
            sort(all(arr));
            ll temp = (arr[0] + arr[n - 1]) / 2;
            ans.push_back(temp);

            rep(j, 0, n) {
                arr[j] = abs(arr[j] - temp);
            }

            if (cnt > 40) {
                p(-1);
                return;
            }
        }

        p(cnt);
        rep(i, 0, ans.size()) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}