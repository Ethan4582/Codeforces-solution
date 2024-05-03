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
    int n, x, count[8] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        count[x] += 1;
    }

    bool solution = false;
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6]) {
        for (int i = 0; i < count[4]; ++i) {
            cout << "1 2 4\n";
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i) {
            cout << "1 2 6\n";
        }
        for (int i = 0; i < count[3]; ++i) {
            cout << "1 3 6\n";
        }
        solution = true;
    }

    if (!solution) {
        cout << "-1\n";
    }

    return 0;
}