#include <bits/stdc++.h>
 
using namespace std;
 
const int MAX = 200'007;
const int MOD = 1'000'000'007;
 
void solve() {
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (char c : s) {
		if (c == 'A') {a++;}
		else {b++;}
	}	
	cout << (a > b ? 'A' : 'B') << '\n';
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}



/*
Since the string is of an odd length, we know that the number of A
s can't be equal to the number of B
s. So, there is always only one possible answer.

Denote variables a_counter and b_counter — the count of A
s and B
s in the string respectively. Let's just iterate through all 5 characters of the string and increase the a_counter every time we see an A
 and the b_counter every time we see a B
. If the a_counter is greater than the b_counter we output A
, and B
 otherwise.
*/