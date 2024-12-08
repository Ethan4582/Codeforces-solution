
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
#define p(a) cout << a << " ";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main()
{
	fastread();
	int t; cin >> t;

	while (t--) {
		int n, m, q; cin >> n >> m >> q;

		vi a(m);
		rep(i, 0, m) cin >> a[i];

		sort(all(a));

		rep(i, 1, q + 1) {
			int b; cin >> b;
			int k = upper_bound(all(a), b) - a.begin(); 

			if (k == 0) cout << a[0] - 1 << ' ';          
			else if (k == m) cout << n - a[m - 1] << ' '; 
			else p((a[k] - a[k - 1]) / 2);    
		}
		cout << "\n";
	}
	return 0;
}





      