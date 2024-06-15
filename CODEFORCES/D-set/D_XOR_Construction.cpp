#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 1; i < n; ++i) {
        cin >> a[i];
        a[i] ^= a[i - 1];
    }

    vector<int> b(n);
    bool found = false;

    for (long long x = 0; x < n; ++x) {
        unordered_set<int> seen;
        bool valid = true;

        for (long long i = 0; i < n; ++i) {
            b[i] = x ^ a[i];
            if (b[i] >= n || seen.count(b[i])) {
                valid = false;
                break;
            }
            seen.insert(b[i]);
        }

        if (valid) {
            found = true;
            break;
        }
    }

    if (found) {
        for (long long i : b) {
            cout << i << " ";
        }
    } else {
        cout << "No valid sequence found";
    }

    return 0;
}





#include <bits/stdc++.h>

using namespace std;

const int LOG = 20;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
   
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        a[i] ^= a[i - 1];
    }

    vector<array<int, 2>> t({{-1, -1}});
    
  
    auto add = [&](int x) {
        int v = 0;
        for (int i = LOG - 1; i >= 0; --i) {
            int j = (x >> i) & 1;
            if (t[v][j] == -1) {
                t[v][j] = t.size();
                t.push_back({-1, -1});
            }
            v = t[v][j];
        }
    };
    
   
    for (int x : a) add(x);

    auto get = [&](int x) {
        int v = 0;
        for (int i = LOG - 1; i >= 0; --i) {
            int j = (x >> i) & 1;
            if (t[v][j ^ 1] != -1) j ^= 1;
            x ^= j << i;
            v = t[v][j];
        }
        return x;
    };

   
    for (int x = 0; x < n; ++x) {
        if (get(x) == n - 1) {
          
            for (int i : a) cout << (x ^ i) << ' ';
            break;
        }
    }
}