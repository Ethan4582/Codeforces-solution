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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

int main() {
    fastread();
    int o;
    cin >> o;
    while (o--) {
        int n;
        cin >> n;

        vi a(n), b(n);
        rep(i, 0, n) {
            cin >> a[i];
        }
        rep(j, 0, n) {
            cin >> b[j];
        }

        vector<int> tmp(n);
        iota(all(tmp), 0);
        sort(all(tmp), [&](int i, int j) {
            return make_pair(a[i], b[i]) < make_pair(a[j], b[j]);
        });

        bool sorted = true;
        for (int i = 0; i < n - 1; ++i) {
            if (a[tmp[i]] > a[tmp[i + 1]] || b[tmp[i]] > b[tmp[i + 1]]) {
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            p(-1);
        } else {
            vector<pair<int, int>> ans;
            for (int i = 0; i < n - 1; ++i) {
                for (int j = 0; j < n - 1; ++j) {
                    if (a[j] > a[j + 1] || b[j] > b[j + 1]) {
                        swap(a[j], a[j + 1]);
                        swap(b[j], b[j + 1]);
                        ans.emplace_back(j + 1, j + 2);
                    }
                }
            }

            p(ans.size());
            for (auto it : ans) {
                p2(it.f, it.s);
            }
        }
    }

    return 0;
}
