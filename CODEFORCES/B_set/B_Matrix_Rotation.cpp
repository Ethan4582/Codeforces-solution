#include <bits/stdc++.h>

#define vi vector<int>
#define YES cout << "YES\n";
#define NO cout << "NO\n";

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
      //   vector<vi> a(2, vi(2)); 
      //   for (int i = 0; i < 2; ++i) {
      //       for (int j = 0; j < 2; ++j) {
      //           cin >> a[i][j]; 
      //       }
      //   }
      //   bool beautiful = false;

   
      //   if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1]|| a[1][0] < a[1][1] && a[0][0] < a[0][1] && a[1][0] < a[0][0] && a[1][1] < a[0][1] || a[1][1] < a[1][0] && a[0][1] < a[0][0] && a[1][1] < a[0][1] && a[1][0] < a[0][0]  || a[0][1] < a[0][0] && a[1][1] < a[1][0] && a[0][1] < a[1][1] && a[0][0] < a[1][0] ) {
      //       beautiful = true;
      //   }


      //   if (beautiful) {
      //       YES
      //   } else {
      //       NO
      //   }
      vi a(4);

       for(int i = 0; i < 4; i++){
          cin >> a[i];
       }
           
        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int minpos = min_element(a.begin(), a.end()) - a.begin();
        if(maxpos + minpos == 3)
            puts("YES");
        else
            puts("NO");
    
    }
    return 0;
}
