#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;

const int N = 1e7 + 10;
int grd[N];

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    memset(grd, -1, sizeof grd);
    grd[0] = 0;
    grd[1] = 1;
    
    int cnt = 0;
    for (long long i = 2; i < N; i++) {
        if (grd[i] == -1) {
            cnt++;
            if (i == 2) cnt = 0;
            if (i == 3) cnt = 2;
            for (long long j = i; j < N; j += i) {
                if (grd[j] == -1)
                    grd[j] = cnt;
            }
        }
        if (grd[i] == -1) {
            cnt++;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 0;
        while (n--) {
            int a;
            cin >> a;
            x ^= grd[a];
        }
        cout << (x == 0 ? "Bob" : "Alice") << "\n";
    }

    return 0;
}

