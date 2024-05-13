

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

#include <unordered_set>

using namespace std;

int main() {
    ll n;
    cin >> n;

    unordered_set<ll > distinctNumbers;

    for (int i = 0; i < n; ++i) {
        ll num;
        cin >> num;
        distinctNumbers.insert(num);
    }

    if (distinctNumbers.size() == 2) {
        cout << "YES" << endl;
        for (auto num : distinctNumbers) {
            cout << num << " ";
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}



#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int V[101]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        V[x]++;
    }
    bool flag=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=i+1;j<=100;j++)
        {
            if(V[i]==V[j] && V[i]>0 && V[j]>0 && (V[i]+V[j]==n))
               {
                   flag=1;
                   cout<<"YES\n"<<i<<" "<<j<<"\n";
                    break;
               }
        }
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }

}

 				 			 		     	 					    			