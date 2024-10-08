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
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int n; 
    cin >> n; 
    vll a(n);
    
    
    rep(i, 0, n) {
        cin >> a[i];
    }
    
    sort(all(a));
    
    unordered_map<int, int> mpp;
    
    rep(i, 1, n) {
        int k = abs(a[i] - a[i - 1]);
        mpp[k]++;
    }

    auto min_diff = min_element(all(mpp));
    
    p2(min_diff->first, min_diff->second);

    return 0;
}
