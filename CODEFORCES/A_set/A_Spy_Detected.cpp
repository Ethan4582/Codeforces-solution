#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    vector<int> a = v;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (v[i] != a[1]) {
            cout << i + 1 << "\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
    return 0;
}


#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        if (freq[v[i]] == 1) {
            cout << i + 1 << "\n";
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
