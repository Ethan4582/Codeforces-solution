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
    fastread() 
    
    int t; 
    cin >> t;
    
    auto evnidx = [](vi& perm, int n) {
        int k = 3;
        for (int i = 2; i < n; i += 2) {
            perm[i] = k;
            k += 2;
        }
    };

    auto oddidx = [](vi& perm, int n) {
        int k = 4;
        for (int i = 3; i < n; i += 2) {
            perm[i] = k;
            k += 2;
        }
    };

    auto clamt = [](vi& perm, int n) {
        int val = 0, maxvl = 0, idx = 0;

        for (int i = 0; i < n; ++i) {
            if ((i + 1) % 2 == 0) {
                val |= perm[i];
            } else {val &= perm[i];  }
            if (val > maxvl) {
                maxvl = val;
                idx = i;
            }
        }

        if (maxvl > val && n % 2 == 0 && (n - 1 - idx) >= 2) {
            swap(perm[idx - 1], perm[n - 1]);
            val = maxvl;
        }

        return make_pair(val, perm);
    };

    auto prn = [](const auto& res) {
        p(res.first)
        copy(res.second.begin(), res.second.end(), 
             ostream_iterator<int>(cout, " "));
        cout << "\n";
    };

    while (t--) {
        int n; 
        cin >> n;
        vi precmp(n);
        precmp[0] = 2; 
        
        evnidx(precmp, n);
        precmp[1] = 1; 
        oddidx(precmp, n);

        auto res = clamt(precmp, n);
        prn(res);
    }

    return 0;
}
