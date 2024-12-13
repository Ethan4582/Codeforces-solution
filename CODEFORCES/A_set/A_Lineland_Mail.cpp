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

using namespace std;

int main() {
    fastread();
    int n; 
    cin >> n; 
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end()); 

    rep(i ,0 ,n) {
        ll mini, maxi;

        if (i == 0) {
            mini = abs(a[i] - a[i + 1]); 
        } else if (i == n - 1) {
            mini = abs(a[i] - a[i - 1]); 
        } else {
            mini = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])); 
        }

        maxi = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])); 

        cout << mini << " " << maxi << endl; 
    }

    return 0;
}
