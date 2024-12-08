#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, n) for (int i = a; i < n; ++i)

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    int k;
    cin >> k;
    
    vector<ll> a(k); 
    rep(i, 0, k) {
        cin >> a[i]; 
    }
    
  	
	int ans = 0;
	for (int i = 0; i < k; ++i) {
		int j = i;
		while (j + 1 < k && a[j + 1] <= a[j] * 2)
			++j;
		ans = max(ans, j - i + 1);
		i = j;
	}
    
    cout <<ans << endl;
    return 0;
}
