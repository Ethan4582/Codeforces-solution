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


int main() {
    int n, width;
    cin >> n >> width;

    vector<double> a;
    for (int i = 0; i < n; i++) {
        int pos, w;
        cin >> pos >> w;
        a.push_back(pos - w / 2.0);
        a.push_back(pos + w / 2.0);
    }

    sort(a.begin(), a.end());

    int s = 2;
    for (int i = 1; i < 2 * n - 1; i += 2) {
        if (a[i + 1] - a[i] > width)
            s += 2;
        else if (a[i + 1] - a[i] == width)
            s += 1;
    }

    cout << s << endl;

    return 0;
}