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
        int n;
        cin >> n;
        string a;
        cin >> a;
 
        vector<int> suf_cnt(n + 1, 0);
        for (int i = n - 1; i >= 0; --i) {
            suf_cnt[i] = suf_cnt[i + 1] + (a[i] == '1');
        }
 
        int pref_cnt = 0;
        int opt_ans = -1;
        int opt_dist = n * 2;
        int threshold = (n + 1) / 2;
 
        for (int i = 0; i <= n; ++i) {
            if (pref_cnt >= (i + 1) / 2 && suf_cnt[i] >= (n - i + 1) / 2 && abs(n - 2 * i) < opt_dist) {
                opt_dist = abs(n - 2 * i);
                opt_ans = i;
            }
            if (i != n) {
                pref_cnt += (a[i] == '0');
            }
        }
 
        cout << opt_ans << endl;
    }
 
    return 0;
}