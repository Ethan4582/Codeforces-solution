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
int a[N];
bool c[N];

void pr(const vi& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] + 1;
        if (i < arr.size() - 1) {
            cout << " ";
        } else {
            cout << "\n";
        }
    }
}

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vs mat(n);
        rep(i, 0, n) {
            cin >> mat[i];
        }

        vi arr(n);
        iota(arr.begin(), arr.end(), 0);

        sort(all(arr), [&](int u, int v) {
            if (u < v)
                return mat[u][v] == '1';
            return mat[v][u] == '0';
        });

        pr(arr);
    }
    return 0;
}
