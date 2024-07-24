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


const ll mod = 1e9 + 7;


using namespace std;
ll solve(ll x){
	return x*(x+1)/2;
}
int main() {
	int m,b;
	cin >> m >> b;
	ll best = 0;
	for(int y = b; y >=0; y--){
		// (x + 1) * (y * (y + 1) / 2) + (y + 1) * (x * (x + 1) / 2);
		ll x = m*(b-y);
		ll t = 0;
		t+=(x+1)*solve(y)+(y+1)*solve(x);
		best = max(best,t);
	}
	p( best )   
}