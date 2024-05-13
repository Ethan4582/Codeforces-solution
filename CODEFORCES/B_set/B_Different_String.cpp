#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool check = false;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[0]) {
                swap(s[i], s[0]);
                check = true;
                break;
            }
        }
        if (!check) {
            cout << "NO" << endl;
            continue; 
        }
        cout << "YES" << endl;
        cout << s << endl;
    }
    return 0;
}
