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
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main() {
    fastread();
    int n; cin >> n;
    vll  arr(n);
    for (auto &x : arr) cin >> x;
    int ans = 0;
    for (int i = 1; i < n; ++i)
        if (arr[i] < arr[i-1]) { ans += (arr[i-1]-arr[i]); arr[i] = arr[i-1]; }
    cout << ans << '\n';
    return 0;
}