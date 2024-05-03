#include<bits/stdc++.h> 
using namespace std;
int a[100005],n,k,ans;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) 
    {
    	cin>>a[i];
	}
    for(int i=k;i<=n;i++)
    {
    	if(a[i]!=a[k])
		{
	        cout<<-1<<endl;
	        return 0;
	    }
	}
    for(int i=1;i<k;i++)
    {
    	if(a[i]!=a[k]) 
    	{
    		ans=i;
		}
	}
  	cout<<ans<<endl;
  	return 0;
}