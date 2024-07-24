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


const ll mod = 1e9 + 7;


using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        s='0'+s;
        int p=s.size();
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]>='5')s[i-1]++,p=i;
        }
        for(int i=(s[0]=='0');i<s.size();i++)
        {
            cout<<(i>=p?'0':s[i]);
        }
        cout<<"\n";
    }
}