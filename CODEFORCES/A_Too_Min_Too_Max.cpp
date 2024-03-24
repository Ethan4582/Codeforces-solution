#include<bits/stdc++.h>
using namespace std ;

int main (){
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testcase;
    cin>> testcase;
    for (int i =1 ; i<=testcase ; i++){
      int n ;  //taking the input 
      cin>> n ;
      vector<int> v(n); //decleation array 
      for (int j=0 ; j<n ; j++){
         cin >>v[j];
      }
      sort(v.begin(), v.end());
      cout<< 2*(v[n-1]-v[0])  +  2*(v[n-2] -v[1])<<endl ;  //the formula by take 4 input the max value av be 
      // 2* (d+c) -2(a+b)
    }

   

   return 0 ;
}

//ios::sync_with_stdio(false);: Disables synchronization between C++ I/O streams and C standard I/O streams.

//cin.tie(nullptr);: Unties the cin stream from the cout stream.

