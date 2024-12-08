#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;
    
    while (t--) {
        ll n;
        cin >> n;
        vi a(n);
        for (auto &x : a)
            cin >> x;

        set<ll> s;
        bool fl = true;
        for (const auto &x : a) {
            if (s.empty()) {
                s.insert(x);
                continue;
            }
            if (s.count(x - 1) || s.count(x + 1)) {
                s.insert(x);
                continue;
            }
            fl = false;
            break;
        }
        cout << (fl ? "YES" : "NO") << endl;
    }
    return 0;
}
