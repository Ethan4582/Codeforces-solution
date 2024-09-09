#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long n, k;
        cin >> n >> k; // Read n and k

        // Calculate the minimum value of x
        long long half_n = n / 2;
        long long min_x = min(abs((2 * half_n) * k - (n * k + (n - 1) * n / 2)),
                               abs((2 * (half_n + 1)) * k - (n * k + (n - 1) * n / 2)));

        cout << min_x << endl; // Output the result for the test case
    }

    return 0;
}



#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define nl "\n"
#define fl(x) for (int i = 0; i < x; i++)
#define fl1(x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define vi vector<int>
#define vout(v)      \
    for (auto i : v) \
    cout << i << " "
#define pp pair<int, int>
#define co(n) cout << n

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = b + a - 1;
    ll sum1 = (b * (b - 1)) / 2;
    ll sum2 = (c * (c + 1)) / 2;
    ll sum = sum2 - sum1;
    ll mn = INT64_MAX;
    ll s = 0;
    while (true)
    {
        s += c;
        sum -= c;
        c--;
        ll ans = abs(sum - s);
        mn = min(mn, abs(sum - s));
        if (ans > mn)
            break;
    }
    cout << mn << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}