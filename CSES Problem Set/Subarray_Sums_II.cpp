#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int n, target;
    cin >> n >> target; 
    vll a(n);
    
    rep(i, 0, n) {
        cin >> a[i];
    }

    // Using a map to store the frequency of prefix sums
    unordered_map<ll, ll> prefix_sum_count;
    ll current_sum = 0;
    ll count = 0;

    // Initialize with prefix sum of 0
    prefix_sum_count[0] = 1;

    rep(i, 0, n) {
        current_sum += a[i];

        // Check if there is a prefix sum that when subtracted from current_sum gives target
        if (prefix_sum_count.find(current_sum - target) != prefix_sum_count.end()) {
            count += prefix_sum_count[current_sum - target];
        }

        // Store the current prefix sum in the map
        prefix_sum_count[current_sum]++;
    }

    p(count);
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define all(v) v.begin(), v.end()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
   ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll  n, x; cin >> n >> x;
	map<ll ,ll > cnt;
	cnt[0]++;
	ll sm = 0, res = 0;
	while (n--)
	{
		int v; cin >> v;
		sm += v;
		res += cnt[sm-x];
		cnt[sm]++;
	}
	p(res );
	return 0;
}


