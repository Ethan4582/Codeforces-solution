#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; i++)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main()
{
    fastread();
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int max_val = 0, y_ans = 1;
        for (int y = 1; y < x; y++)
        {
            int curr_val = __gcd(x, y) + y;
            if (curr_val > max_val)
            {
                max_val = curr_val;
                y_ans = y;
            }
        }
        cout << y_ans << "\n";
    }

    return 0;
}

 


#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<x-1<<"\n";
	}
}