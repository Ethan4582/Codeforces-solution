


#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define p(a) cout << a << "\n";
using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

          if (s.size() < 2) {
            p(-1);
            continue;
        }


        bool found = false;

        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == s[i + 1]) {
                p(s.substr(i, 2));  
                found = true;
                break;
            }
        }

        if (found) continue;
        for (int i = 0; i < s.size() - 2; ++i) {
            if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2]) {
                p(s.substr(i, 3));  
                found = true;
                break;
            }
        }

        if (!found) {
            p(-1);  
        }
    }

    return 0;
}
