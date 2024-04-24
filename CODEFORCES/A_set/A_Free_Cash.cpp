


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
    
    int n;
    cin >> n;

   
    vector<vector<int>> cnt(24, vector<int>(60, 0));

   
    for (int i = 0; i < n; ++i) {
        int h, m;
        cin >> h >> m;
        cnt[h][m]++;
    }

    int maxVisitors = 0;
    for (int h = 0; h < 24; ++h) {
        for (int m = 0; m < 60; ++m) {
            maxVisitors = max(maxVisitors, cnt[h][m]);
        }
    }

    
    cout << maxVisitors << endl;

    return 0;
}