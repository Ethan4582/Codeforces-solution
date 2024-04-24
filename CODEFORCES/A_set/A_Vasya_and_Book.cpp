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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;



const int INF = int(2e9) + 99;

int n, x, y, d;

int dist(int x, int y) {
    return (abs(x - y) + (d - 1)) / d;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> x >> y >> d;

        int len = abs(x - y);
        int res = INF;

        if (len % d == 0)
            res = min(res, dist(x, y));

        len = y - 1;
        if (len % d == 0)
            res = min(res, dist(x, 1) + dist(1, y));

        len = n - y;
        if (len % d == 0)
            res = min(res, dist(x, n) + dist(n, y));

        if (res == INF)
            res = -1;

        cout << res << endl;
    }

    return 0;
}
