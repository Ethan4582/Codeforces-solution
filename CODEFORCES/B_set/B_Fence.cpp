#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int n, k;
    cin >> n >> k;
    vll a(n);
    vll presum(n + 1, 0); 

    rep(i, 0, n) {
        cin >> a[i];
        presum[i + 1] = presum[i] + a[i];
    }

    ll minsum = LLONG_MAX; 
    int minindx = 0;
    rep( i ,0 , n-k+1){
      ll currsum= presum[i+k]-presum[i];
      if(currsum<minsum){
         minsum=currsum;
         minindx=i+1;
      }
    }
   

    p(minindx); 

    return 0;
}
