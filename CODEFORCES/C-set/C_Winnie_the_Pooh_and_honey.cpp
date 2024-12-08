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

const int N = 1000000; 
int prime[N];
vector<int> pr;


int main() {
    fastread();
    int t  , k, count=0 , b  ; 
    cin >>t >>k ; 

    b=3*k ; 

    vi a(t);
            for (int i = 0; i < t; ++i) {
                cin >> a[i]; 
                if (a[i]>b){
                  count+=a[i]-b ;
                }
                else{
                  count+= a[i]/k;
                }
            }

            p(count) ;
   
    return 0;
}



#include<bits/stdc++.h>

typedef long long int ll;



using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    //freopen("in.txt","r",stdin);
   
    ll i,j,k;
    ll n,m;

    cin>>n>>k;
    ll a,count=0;

    for(i=0;i<n;i++)
    {
        cin>>a;

        for(j=0;j<3;j++)
        {
            if(a>=k)
            {
                a-=k;
            }

            else
                break;
        }

        count+=a;
    }

    cout<<count;


    return 0;
}