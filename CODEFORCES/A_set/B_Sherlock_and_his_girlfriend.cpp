#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 
int sieve[100005];
int main()
{
	int i, n, j;
	cin>>n;
	for(i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			for(j=2*i; j<=n+1; j+=i)
				sieve[j]=1;
	}
	
	if(n>=2)
		cout<<"2\n";
	else
		cout<<"1\n";

	for(i=2; i<=n+1; i++)
	{
		if(!sieve[i])
			cout<<"1 ";
		else
			cout<<"2 ";
	}

	return 0;
}


