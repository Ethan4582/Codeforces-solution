#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

const ll mod = 1e9 + 7;
const int N = 200010;

using namespace std;

ll A[N];

void precompute() {
    for (int i = 1; i < N; ++i) {
        int temp = i;
        while (temp > 0) {
            A[i]++;
            temp /= 3;
        }
        A[i] += A[i - 1];
    }
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << A[r] - A[l - 1] + (A[l] - A[l - 1]) << "\n";
}

int main() {
    fastread();
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
