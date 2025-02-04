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

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
      //   n-y /2020  = (x+y)  sunppose y is th remainder   n-y/2020 -y = k number possible 
       int cn21 = n % 2020;
    int cn20 = (n - cn21) / 2020 - cn21;
    if (cn20 >= 0 && 2020 * cn20 + 2021 * cn21 == n) {
     YES;
    } else {
      NO;
    }
    }
    return 0;
}

