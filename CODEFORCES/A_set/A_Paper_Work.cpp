#include <bits/stdc++.h>
using namespace std;

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

void solve() {
    int n, loss = 0, cnt = 0;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            loss++;
        }
        cnt++;
        if (loss == 2) {
            ans.push_back(cnt);
            cnt = 0;
            loss = 0;
        }
    }
    // if no negative number 
    if (loss == 0 && ans.size() > 0) {
        ans[ans.size() - 1] += cnt;
    } else {
        ans.push_back(cnt);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    fastread();
    solve();
    return 0;
}
