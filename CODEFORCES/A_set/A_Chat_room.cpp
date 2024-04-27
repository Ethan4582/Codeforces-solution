


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




using namespace std;


int main()
{
        string hello="hello";
        string line;
        while(cin>>line)
        {
                bool ans=false;
                int len=line.length(),i,j,count=0;
                for(i=0;i<len;i++)
                {
                        if(line[i]==hello[count])
                        count++;
                        if(count==5)
                        {
                                ans=true;
                                break;
                        }
                }
                if(ans==true)
               {
                  YES;
               }
                else
                NO;

        }
      return 0;
}



