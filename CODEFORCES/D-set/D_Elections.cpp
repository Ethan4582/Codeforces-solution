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


const ll mod = 1e9 + 7;


using namespace std;

int main() {
    
    int t ; 
    cin >>t ; 
    while(t--){
         int n, c;
    cin >> n >> c;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << "0\n";
        
    }
    else{
         int mx = *max_element(a.begin() + 1, a.end());
    int mxc = max(a[0] + c, mx);
    // to remove all the candiate 
    int winner = mxc == a[0] + c ? 0 : find(a.begin() + 1, a.end(), mx) - a.begin();
    ll sum = c;
    for (int i = 0; i < n; sum += a[i], ++i) {
        int answer;
        if (i == winner) {
            answer = 0;
        } else if (sum + a[i] >= mx) {
            answer = i;
        } else {
            answer = i + 1;
        }
        cout << answer << " \n"[i == n - 1];
    }

    }


   
  }
    return 0;
}