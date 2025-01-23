#include <bits/stdc++.h>
#define ll long long 
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
const int MAX = 11;
using namespace std;

int main() {
   fastread();
   int t;
   cin >> t;
   while(t--) {
       int n;
       cin >> n;
       vector<int> a(n);
       for(auto &x : a) cin >> x;
       
       ll ans = 0;
       for(int x = 1; x < MAX; x++) {
           vector<int> b(n);
           for(int i = 0; i < n; i++) {
               b[i] = (a[i] > x ? 1 : -1);
           }
           
           int sum = n;
           vector<int> pref(n);
           for(int i = 0; i < n; i++) {
               pref[i] = sum;
               sum += b[i];
           }
           
           vector<int> cnt(2 * n + 1);
           sum = n;
           int j = 0;
           
           for(int i = 0; i < n; i++) {
               if(a[i] == x) {
                   while(j <= i) {
                       cnt[pref[j]]++;
                       j++;
                   }
               }
               sum += b[i];
               ans += cnt[sum];
           }
       }
       
       ans = 1LL * n * (n + 1) / 2 - ans;
       cout << ans << "\n";
   }
   return 0;
}