#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, n) for (int i = a; i < n; ++i)

using namespace std;

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

string s[N];

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n, k; 
        cin >> n >> k; 

        rep(i, 0, n) {
            cin >> s[i];
        }

       
        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                if (i < n && j < s[i].length()) { 
                    cout << s[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}