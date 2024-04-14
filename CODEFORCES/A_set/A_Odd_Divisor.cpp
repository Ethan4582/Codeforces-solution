#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;



int main() {
  int t;
  cin >> t;
  while (t--) {
     ll n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  }
}