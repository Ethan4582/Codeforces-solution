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

using namespace std;

int t , m ; 

int check_mex(set<int> a) {
    int mex = 0;
    while (a.count(mex) > 0) {
        mex++;
    }
    return mex;
}

int main() {
    fastread();
    
    cin >> t >> m; 
    set<int> a;
    vi temp(t);
    
    rep(i, 0, t) {
        int x;
        cin >> x;
        a.insert(x);
        a.insert(x + m);
        temp[i] = check_mex(a);
    }

    for (int mex : temp) {
        p(mex);
    }

    return 0;
}
