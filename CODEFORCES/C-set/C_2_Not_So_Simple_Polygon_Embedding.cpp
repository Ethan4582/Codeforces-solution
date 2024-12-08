#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 3.14159265358979323846
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		//theta =pi/4*n
		cin>>n;
		cout<<fixed << setprecision(9)<<(cos(pi/(4*n))/sin(pi/(2*n)))<<"\n";
	}
	return 0;
}