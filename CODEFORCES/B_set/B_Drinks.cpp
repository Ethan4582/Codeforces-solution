


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
    int n ;
    cin>>n ;
    double sum=0;
   
           vector<int> arr(n); 
           for (int i = 0; i < n; ++i) {
               cin >> arr[i]; 
               sum+=arr[i];
           }


           cout<< sum/n ;

    return 0;


}


