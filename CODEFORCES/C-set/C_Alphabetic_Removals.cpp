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

const int N = 1000000; 
int prime[N];
vector<int> pr;


int main() {

	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;

	vector<pair<char, int>> c(n);
	for (int i = 0; i < n; ++i)
		c[i] = make_pair(s[i], i);
	sort(c.begin(), c.end());
   //lamda function for comaparatibve sorting 
	sort(c.begin() + k, c.end(), [&] (const pair<char, int> &a, const pair<char, int> &b) {
		return a.second < b.second;
	});
	
	for (int i = k; i < n; ++i)
		cout << c[i].first;
	cout << endl;
	
	return 0;
}