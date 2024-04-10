#include<bits/stdc++.h>
using namespace std;
#define int long long

const int modd = 1e9+7;
int k,a[200005];
int n;
int sum,s;
int maxx;

signed main()
{
	int t;cin>>t;
	while(t--)
	{
		sum=s=maxx=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			s+=a[i];if(s<0) s=0;
			maxx=max(maxx,s);
		}
    //  s is  the current comtigoiss subarray and  sum -sthe reaming array after removing  the subarray 
		s=maxx,sum-=maxx;
		for(int i=0;i<k;i++) s=s*2%modd;
		cout<<((sum+s)%modd+modd)%modd<<endl;
	}
}

