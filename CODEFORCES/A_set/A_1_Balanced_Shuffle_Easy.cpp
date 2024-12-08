



#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<tuple<int, int, char>> a;
    int b = 0;

    for (int i = 0; i < s.length(); i++) {
        a.emplace_back(b, -i, s[i]);
        if (s[i] == '(') {
            b++;
        } else {
            b--;
        }
    }

    sort(a.begin(), a.end());
    
    for (const auto& x : a) {
        cout << get<2>(x);
    }
    
    return 0;
}
