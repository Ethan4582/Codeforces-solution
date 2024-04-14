


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
    int x ;
    cin>>x ;
    while (x--){
      int n ,m ;
            cin >> n >> m;
        if (n<m) {
            swap(n, m);
        }
        if (m==1 && n>=3) {
           p(-1);
        } else {
            int z= 2*n-2-(n+m)%2 ;
            p(z);
        }

    }

    return 0;


}


