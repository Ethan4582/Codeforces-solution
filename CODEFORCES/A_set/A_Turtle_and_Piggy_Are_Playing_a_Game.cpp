#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
 
int solve(ll l, ll r)
{
	int count=0;
	while(r!=1)
	{
		r/=2;
		count++;
	}
	 return count;
}
 
 
 
 
 
 
int main()
{
// #ifndef ONLINE_JUDGE
 
// 	freopen("input1.txt","r",stdin);
// 	freopen("output1.txt","w",stdout);
 
// #endif	
 
	ll t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		// vector<vector<ll>>arr(n,vector<ll>(3));
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<3;j++)
 
		// 	{
		// 		cin>>arr[i][j];
		// 	}
		// }
		
		int result=solve(l,r);
		
		
			cout<<result<<endl;
		
		
 
	 }
	return 0;
} 