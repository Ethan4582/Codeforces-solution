#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);

        long long ans = 0;
        deque<int> pos;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if (c == '_') {
                c = pos.empty() ? '(' : ')';
            }
            if (c == ')') {
                if (!pos.empty()) {
                    ans += i - pos.back();
                    pos.pop_back();
                }
            } else {
                pos.push_back(i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
