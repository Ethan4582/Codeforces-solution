#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vll arr(n);
    for (auto &x : arr) cin >> x;
    ll ans = 0;
    for (int i = 1; i < n; ++i)
        if (arr[i] < arr[i-1]) { ans += (arr[i-1]-arr[i]); arr[i] = arr[i-1]; }
    cout << ans << '\n';
    return 0;
}