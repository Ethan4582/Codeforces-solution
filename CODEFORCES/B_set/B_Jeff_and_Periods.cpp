#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define f first
#define s second
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

int main()
{
    

    ll i,j,k;
    ll n,x,y;

    map<ll,vector<ll>> mp;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].push_back(i);
    }

    vector<pair<ll,ll>> v;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        ll k = it->first;

        if (mp[k].size() == 1)
            v.push_back({k, 0});
        else {
            set<ll> s;
            for (i = 1; i < mp[k].size(); i++)
                s.insert(abs(mp[k][i] - mp[k][i - 1]));

            if (s.size() == 1)
                v.push_back({k, *s.begin()});
        }
    }

    cout << v.size() << endl;
    for (auto it = v.begin(); it != v.end(); ++it) {
        ll x = it->first;
        ll px = it->second;
        cout << x << " " << px << endl;
    }

    return 0;
}


