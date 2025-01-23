#include <bits/stdc++.h>
#define ll long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        ll n; 
        cin >> n; 

      // //   c has to be less that a , b  and gc(a,b)= c= some a=c+x , b=c+y a+b= x+y+2c 


      //   for (ll c = 1; c < n; c++) {
      //       ll rem = n - c; 
      //       if (rem >= 2 * c) {
      //           // We can pick a = c + k and b = c + (rem - k) for k >= 0
      //           // For simplicity, we can take k = 0
      //           ll a = c; // a = c
      //           ll b = rem - c; // b = rem - c
      //           // Ensure that b is greater than c
      //           if (b > c) {
      //               cout << a << ' ' << b << ' ' << c << endl;
      //               break; 
      //           }
      //       }
      //   }
      
    if (n % 2 == 0) cout << "2 " << (n - 1) - 2 << " 1\n"; // if even 2, c=1 
    else
    {
        int cur = (n - 1) / 2;
        if (cur % 2 == 0) cout << cur - 1 << " " << cur + 1 << " " << 1 << endl; // test case hint it goes to the mid 2 prim num that are close to each so athat it sprime and staisfy n validty 
        else cout << cur - 2 << " " << cur + 2 << " " << 1 << endl;
    }
    }
    return 0;
}
