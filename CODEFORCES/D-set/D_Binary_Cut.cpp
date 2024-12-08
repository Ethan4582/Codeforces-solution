#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int res = 1, x = 0;
    for (int i = 0; i + 1 < s.size(); i++) {
        if (s[i] != s[i + 1]) res++;
        if (s[i] == '0' && s[i + 1] == '1') x = 1;
    }
    cout << res - x << '\n';
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
