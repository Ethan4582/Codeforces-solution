/*

Let's denote S(x)
 as the sum of digits of number x
. Since n≤2⋅105
, for a single test case, we can brute force S(1)+S(2)+S(3)+⋯+S(n)
 and output the answer. However, since the number of test cases is large, we can't compute this value for n
 each time.

This needs a standard idea of precomputation: we will compute the answer for each value from 1
 to n
 and store it in an array ans
: ans(n)=S(n)+ans(n−1)
. Then to answer each test case we just output ans(n)
. No math is needed!

The precomputation takes O(nlogn)
 time (it takes O(logn)
 time to find sum of digits), but now we can answer queries in O(1)
 per test case, so overall the complexity is O(nlogn+t)
.
*/

#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200'007;
const int MOD = 1'000'000'007;
 
int res[MAX];
 
int S(int x) {
	int res = 0;
	while (x) {
		res += (x % 10);
		x /= 10;
	}
	return res;
}
 
void solve() {
	int x;
	cin >> x;
	cout << res[x] << '\n';
}
 
int main() {
	res[0] = 0;
	for (int i = 1; i < MAX; i++) {
		res[i] = res[i - 1] + S(i);
	}
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}