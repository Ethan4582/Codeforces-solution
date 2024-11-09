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


using namespace std;


int main() {
 fastread()
    int t;
    cin >> t;

    auto solve = [&]() {
        int n;
        cin >> n;

        vll arr(n + 1);
        auto solve2 = [&]() {
            for (int i = 1; i <= n; ++i) {
                long long tmp;
                cin >> tmp;
                arr[i] = tmp + (i - 1);
            }
        };

        auto mkhep = [&]() {
            using vlpair = pair<ll, int>;
            priority_queue<vlpair, vector<vlpair>, greater<vlpair>> minhep;

            for (int i = 1; i <= n; ++i) {
                minhep.emplace(arr[i], i - 1);
            }
            return minhep;
        };

        auto prstes = [&](auto& minhep) {
            map<ll, bool> st;
            st[n] = true;

            while (!minhep.empty()) {
                auto crnt = minhep.top();
                minhep.pop();
                ll vale = crnt.first;
                int idx = crnt.second;

                if (st[vale]) {
                    st[vale + idx] = true;
                }
            }
            return st;
        };

        auto mxst = [&](const auto& st) {
            long long crrmxst = 0;
            for (const auto& [state, vld] : st) {
                if (vld) {
                    crrmxst = state;
                }
            }
            return crrmxst;
        };

        solve2();
        auto minhep = mkhep();
        auto st = prstes(minhep);
        long long res = mxst(st);
      p(res );
    };

    while (t--) {
        solve();
    }

    return 0;
}



