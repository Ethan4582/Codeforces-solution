// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
//   int t;
//   cin >> t;
//   while (t--) {
//     int l, r;
//     cin >> l >> r;
//     cout << (r - l + 1 + l % 2) / 4 << endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int l, r;
    cin >> l >> r;
    int cnt=0;
    for ( int i =l ;i<=r; i++){
      if (i&2!=0){
         cnt++;
      }
    }
    cout<<cnt/2<<endl;
  }
  return 0;
}