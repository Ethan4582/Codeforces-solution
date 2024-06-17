#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N; 
	cin >> N;

	vl m(N); 
   	long long psum= 0;
   m[psum]=1;
   for ( int i=0 ; i <N ; i++){
      int k; 
      cin>>k ;
      psum+=k;
      // make sure of neagive number 
      m[(psum % N +N )%N]++;

   }

   ll ans=0 ;
   for ( ll  x :m){
      ans += x * (x - 1) / 2;
   }
   cout << ans <<endl ; 
   return 0 ; 
}
