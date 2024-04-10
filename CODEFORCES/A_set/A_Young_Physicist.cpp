#include<bits/stdc++.h>
using namespace std ;

int main (){

   int n  , a ,b , c ,asum(0)  ,bsum(0) , csum(0);
   cin >> n ;

   while(n--){
      cin >>  a >> b>> c;
      asum+=a;
      bsum+=b;
      csum+=c;
   }

   if (asum==0  && bsum==0  && csum==0) {
      cout<< "YES"<<endl ;
   }
   else{
      cout<<"NO"<< endl;
   }


   return 0 ;
}

