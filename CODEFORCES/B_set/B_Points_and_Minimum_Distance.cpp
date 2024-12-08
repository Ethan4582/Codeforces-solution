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

int cala_Distance(int x, int x1, int y, int y1) {
    int ans = abs(x - x1) + abs(y1 - y);
    return ans;
}

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        vector<int> arr(2 * n);
        vector<int> arr2, arr3;

        for (int i = 0; i < 2 * n; i++) {
            cin >> arr[i];
        }

        sort(all(arr));

        for (int i = 0; i < n; i++) {
            arr2.pb(arr[i]);
        }

        sort(rall(arr2));

        for (int i = n; i < 2 * n; i++) {
            arr3.pb(arr[i]);
        }

        sort(rall(arr3));

        rep(i, 0, n - 1) {
            ans += cala_Distance(arr2[i], arr2[i + 1], arr3[i], arr3[i + 1]);
        }

        p(ans);

        for (int i = 0; i < n; i++) {
            p2(arr2[i], arr3[i]);
        }
    }

    return 0;
}
