#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";


#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;


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