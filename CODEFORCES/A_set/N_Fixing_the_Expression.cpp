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

    int t1 = s[0] - '0';
    int t2 = s[2] - '0';

    if (t1 > t2) {
        s[1] = '>';
    } else if (t1 < t2) {
        s[1] = '<';
    } else {
        s[1] = '=';
    }

    cout << s << endl;
    }

    return 0;
}