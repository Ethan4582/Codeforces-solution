#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t ;
    cin>>t ;

    while(t--){
      int n ; 
      cin >> n ; 
      if ( n%2 ){
         cout << "NO\n";
         continue;
      }
      n/=2;
      cout << "YES\n";
      for  ( int i=0 ; i <n ; i++) cout << "AAB";
      cout << "\n";


    }
    

    return 0;
}
