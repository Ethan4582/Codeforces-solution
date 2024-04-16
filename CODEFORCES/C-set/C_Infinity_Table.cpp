#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		int a = 1;
		int x = 1;
		int i = 1;

		while (k >= x + a)
		{
         // updating th layer 
			x += a;
			a += 2;
			i += 1;
		}

		int m = k - x + 1;
		if (m <= i)
			cout << m << ' ' << i << '\n';
		else
			cout << i << ' ' << (i - (m - i)) << '\n';
	}
}

