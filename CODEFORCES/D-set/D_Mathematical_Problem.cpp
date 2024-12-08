#include <bits/stdc++.h>
using namespace std;
 
using pii = pair<int, int>;
using ll = long long;
 
int t;
 
const int N = 20 + 5, inf = 1e9 + 20;
int n;
string s;
 
int a[N];
 
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
	cin >> t;
 
	while (t--) {
		cin >> n;
		cin >> s;
 
		int ans = inf;
 
		for (int st = 0; st < n - 1; st++) {
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (i == st) {
					a[cnt++] = 10 * (s[i] - '0') + (s[i + 1] - '0');
					i++;
				}
				else a[cnt++] = (s[i] - '0');
			}
 
			int val = 0;
			for (int i = 0; i < cnt; i++) {
				if (a[i] == 0) {
					val = -1;
					break;
				}
				if (a[i] == 1) continue;
				val += a[i];
			}
 
			if (!val) val = 1;
			if (val == -1) val = 0;
 
			ans = min(ans, val);
		}
 
		cout << ans << '\n';
	}
}