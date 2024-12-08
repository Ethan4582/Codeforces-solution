#include <bits/stdc++.h>

#define all(v) v.begin(), v.end()


#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) cout << a[i] << ' ';
        cout << a[0] << '\n';
    }

    return 0;
}
