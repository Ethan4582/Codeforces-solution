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
    int T; 
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<pair<ll ,ll >> it(N);
        long long sum = 0, opcst = 0;

        auto iv = [&]() {
            auto readValue = [](auto &pair, bool isPromo = false) { 
                cin >> (isPromo ? pair.second : pair.first); 
            };
            
            for_each(it.begin(), it.end(), [&](auto &im) { 
                readValue(im); 
            });
            
            for_each(it.begin(), it.end(), [&](auto &im) { 
                readValue(im, true); 
                im.first -= im.second; 
                sum += im.second; 
            });
        };

        auto solv = [&]() -> ll {
            sort(it.begin(), it.end());
            opcst = sum;
            sum += it[0].first;

            auto ipcst = [&](int idx) {
                sum += it[idx].first;
                opcst = min(opcst, sum);
            };

            for (int i = 1; i < N; ++i) {
                ipcst(i);
            }
            return opcst;
        };

        iv();
        p(solv());
    }

    return 0;
}
