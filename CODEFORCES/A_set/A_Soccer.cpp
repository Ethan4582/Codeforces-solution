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
    while (t--){
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1>> y2;
        if (x1 > x2){
            swap(x1, x2);
            swap(y1, y2);
        }
        if (x1 < x2 && y1< y2){
            NO
        }
        else{
            YES
        }
    }

    return 0;
}
