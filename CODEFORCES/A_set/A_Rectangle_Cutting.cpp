#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n ;
    cin>>n ;

    while ( n--){
      int  k , m  ;
      cin >> k >> m ; 

      //this all id a <b 

      if( k >m  ){
         swap(k ,m );
      }

      if ( ( k % 2==1 && m % 2 ==1) ||  ( k %2 ==1) && (m==2*k)){
         cout << "No\n";
      }
      else{
         cout<< "Yes\n";
      }
    }
    

    return 0;
}
