#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> required(m);
    for (int i = 0; i < m; ++i) {
        cin >> required[i];
    }
    
    vector<int> total(m, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            total[j] += x;
        }
    }

    bool met_goal = true;
    for (int i = 0; i < m; ++i) {
        if (total[i] < required[i]) {
            met_goal = false;
            break;
        }
    }

    if (met_goal) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
