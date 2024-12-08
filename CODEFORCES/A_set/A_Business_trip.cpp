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
int main()
{
    int k;
    vector<int> water;
    cin >> k;
    for(int i=0; i < 12; i++)
    {
        int temp;
        cin >> temp;
        water.push_back(temp);
    }
    int N = water.size();
    sort(water.begin(), water.end());
    int sum = 0;
    int month = 0;
    bool found = false;
    if(k == 0){
        cout << 0 << endl;
        found = true;
    }
    for(int i=N-1; i >= 0 && !found; i--)
    {
        sum += water[i];
        month++;
        if(sum >= k)
        {
            cout << month << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << -1 << endl;
    return 0;
}



  