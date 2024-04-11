


#include <bits/stdc++.h>

#define p(a) cout << a << "\n";


using namespace std;
int main()
{
  
    int n ;
    cin>>n ;
    while (n--){
      int a , b ; 
      cin >> a >> b ; 
      int count = 0 ;
      while ( a%b!=0){
         a+=1;
         count++;
      }
      p(count);
    }

    return 0;

}




#include <iostream>

#define p(a) cout << a << "\n";

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        int count = (b - (a % b)) % b; 
        p(count);
    }
    return 0;
}
