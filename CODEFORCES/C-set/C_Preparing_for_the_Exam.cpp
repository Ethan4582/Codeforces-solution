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

ll w[330000];
int a[N]; 
bool c[N]; 
void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
   rep(i , 0 , m)  cin>>w[i];
    map<ll,ll> s;
    ll a;
    for(int i=0;i<k;i++){
        cin>>a;
        s[a]++;
    }
    if(k==n){
       rep(i , 0 , m)  cout<<1;
        cout<<'\n';
    }
    else if(k==n-1){
       rep(i , 0 , m){
            if(s[w[i]]==0)  cout<<1;
            else  cout<<0;
        }
        cout<<'\n';
    }
    else{
       rep(i , 0 , m)  cout<<0;
        cout<<'\n';
    }
}
int main(){
   fastread();
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
};





#include<bits/stdc++.h>
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


using namespace std;

const ll MX = 200005;
const ll mod = 998244353;

ll bixpo(ll base, ll p) {
	ll ans = 1LL;
	while (p) {
		if (p & 1) {
			ans *= base;
			ans %= mod;
			p--;
		} else {
			base *= base;
			base %= mod;
			p /= 2;
		}
	}
	return ans % mod;
}

ll vag(ll x) {
	return bixpo(x, mod - 2);
}

int main()
{
	fastread();
	ll t;
	cin >> t;
	while (t--) {
		ll n, q;
		cin >> n >> q;
		vll a(n), c(n);
		for (ll i = 0; i < n; i++) {
			cin >> a[i];
			c[i] = a[i];
		}
		vll b(n), d(n);
		for (ll i = 0; i < n; i++) {
			cin >> b[i];
			d[i] = b[i];
		}
		sort(c.begin(), c.end());
		sort(d.begin(), d.end());
		ll prod = 1LL;
		for (ll i = 0; i < n; i++) {
			prod *= min(c[i], d[i]);
			prod %= mod;
		}
		cout << prod << " ";
		for (ll i = 0; i < q; i++) {
			ll in, x;
			cin >> in >> x;
			x--;
			if (in == 1) {
				ll idx = upper_bound(c.begin(), c.end(), a[x]) - c.begin() - 1;
				if (c[idx] < d[idx]) {
					prod *= vag(c[idx]);
					prod %= mod;
					prod *= (c[idx] + 1);
					prod %= mod;
				}
				a[x]++, c[idx]++;
			} else {
				ll idx = upper_bound(d.begin(), d.end(), b[x]) - d.begin() - 1;
				if (c[idx] > d[idx]) {
					prod *= vag(d[idx]);
					prod %= mod;
					prod *= (d[idx] + 1);
					prod %= mod;
				}
				b[x]++, d[idx]++;
			}
			cout << prod;
			if (i + 1 < q)cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
