#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

main()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	bool ans=false;
	int ind=-1;
	for(int i=n-1;i>=0;i--)
	{
	    int p=s[i]-'a'+1;
	    for(int j=p;j<k;j++)
	    {
	        if ((i >= 1 && j == s[i - 1] - 'a') || (i >= 2 && j == s[i - 2] - 'a'))
                continue;
            s[i] = char(j + 'a');
            ind = i + 1;
            ans = 1;
            break;
	    }
	    if(ans)
	    break;
	}
	if(!ans)
	{
	    cout<<"NO"<<endl;
	    return 0;
	}
	for (int i = ind; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if ((i >= 1 && j == s[i - 1] - 'a') || (i >= 2 && j == s[i - 2] - 'a'))
                continue;
            s[i] = char(j + 'a');
            break;
        }
    }
	for(int i=0;i<n;i++)
	{
	    cout<<s[i];
	}
	cout<<endl;
	return 0;
}