#include <bits/stdc++.h>
#define lli long long
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
    fastread();
    lli T = 1;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        if (s.size() < 3) {
            NO;
            continue;
        }

        string t = s.substr(2);
        const lli a = stoll(s.substr(0, 2));
        const lli b = stoll(t);

        if (a != 10 || b < 2 || t != to_string(b)) {
            NO;
        } else {
            YES;
        }
    }

    return 0;
}
