#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> gr;

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;
            gr.push_back(row);
        }

        string ans = "YES";

        if (gr[0][0] != gr[n - 1][m - 1]) {
            bool impossible = true;
            for (int j = 0; j < m - 1; j++) {
                if (gr[0][j] != gr[0][j + 1] || gr[n - 1][j] != gr[n - 1][j + 1]) {
                    impossible = false;
                }
            }

            if (impossible) {
                ans = "NO";
            }

            impossible = true;
            for (int i = 0; i < n - 1; i++) {
                if (gr[i][0] != gr[i + 1][0] || gr[i][m - 1] != gr[i + 1][m - 1]) {
                    impossible = false;
                }
            }

            if (impossible) {
                ans = "NO";
            }
        }

        cout << ans << endl;
    }

    return 0;
}
