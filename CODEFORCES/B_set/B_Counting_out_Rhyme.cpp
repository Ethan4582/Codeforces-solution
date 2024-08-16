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

int a[N]; 
bool c[N]; 
int n, k, child[105];
queue <int> children;
int main() {
	cin >> n >> k; 
	for (int i = 1; i <= k; i ++) {
		cin >> child[i];
	}
	for (int i = 1; i <= n; i ++) {
		children.push(i); 
	}
	for(int i = 1;i <= k;i++) {
		child[i] %= children.size();  
		for (int j = 1; j <= child[i]; j ++) {
			children.push (children.front());
			children.pop();
		}
	p(children.front());
		children.pop(); 
	}
	return 0;
}