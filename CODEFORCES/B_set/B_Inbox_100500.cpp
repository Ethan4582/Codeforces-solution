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


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;


int main() {
    fastread();
 ll i,j,k;
    ll n,m,w;

    cin>>n;
    ll a[n];

    w=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i])
            w++;
    }

    ll count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            w--;
        }

        else
        {
            if(a[i-1]==1 && w)
                count++;
        }
    }

    cout<<count;


    return 0;
}