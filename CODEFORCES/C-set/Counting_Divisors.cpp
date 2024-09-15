// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;

// vector<ll> get_divisors(ll n) {
//   vector<ll> divs;
//   for (int i = 1; 1LL * i * i <= n; i++) {
//     if (n % i == 0) {
//       divs.push_back(i);
//       if (i != n / i) {
//         divs.push_back(n / i);
//       }
//     }
//   }
 
//   return divs;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//  int t ; 
//  cin>>t;
//  while(t--){
//     ll n; cin >> n ;
//   vector<ll> divs = get_divisors(n);
//   cout<<divs.size()<<endl;
//  }
//   return 0;
// }


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
#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

const int MAX = 1000005;
int spf[MAX];

void sievespf(int n) {
    for (int i = 1; i <= n; i++) {
        spf[i] = i;
    }
    for (int p = 2; p * p <= n; p++) {
        if (spf[p] == p) {
            for (int i = p * p; i <= n; i += p) {
                if (spf[i] == i) {
                    spf[i] = p;
                }
            }
        }
    }
}

int solve(int x) {
    int ans = 1;
    while (x != 1) {
        int y = spf[x];
        int count = 0;
        while (x % y == 0) {
            count++;
            x /= y;
        }
        ans *= (count + 1);
    }
    return ans;
}

int main() {
    fastread();
    sievespf(MAX - 1);
    int t; 
    cin >> t;
    while (t--) {
        int x; 
        cin >> x;
        cout << solve(x) << '\n';
    }
    return 0;
}
