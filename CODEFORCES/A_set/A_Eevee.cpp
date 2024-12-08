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
    int n;
    string s, p[8] = {"vaporeon", "jolteon", "flareon", "espeon",
                    "umbreon", "leafeon", "glaceon", "sylveon"};
    cin >> n >> s;
    for (string pokemon : p)
        if (pokemon.length() == n)
        {
            bool m = true;
            for (int i = 0; i < n; i++)
                if (s[i] != '.' and s[i] != pokemon[i]) m = false;
            if (m)
            {
                p( pokemon );
                return 0;
            }
        }
}





#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
string s[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    string str;
    bool chk[8];
    for(int i=0;i<8;++i)chk[i]=true;
    cin>>n;
    cin>>str;
    if(n==8){
        cout<<s[0]<<endl;
        return 0;
    }
    else if(n==6){
        cout<<s[3]<<endl;
        return 0;
    }
    for(int i=0;i<n;++i)
    {
        if(str[i]=='.')continue;
        for(int j=0;j<8;++j)
            if(chk[j] && str[i]!=s[j][i])
                chk[j]=false;
    }
    for(int i=1;i<8;++i)if(chk[i])
        cout<<s[i]<<endl;
    return 0;
}