


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

int main() {

    int a00,a01,a02,a10,a11,a12,a20,a21,a22 ;
    cin>>a00>>a01>>a02>>a10>>a11>>a12>>a20>>a21>>a22 ; 
    int sum=(a01+a02+a10+a12+a20+a21)/2 ;
    a00=sum-(a01+a02) ;
    a11=sum-(a10+a12) ;
    a22=sum-(a20+a21) ;
    cout<<a00<<" "<<a01<<" "<<a02<<endl ;
    cout<<a10<<" "<<a11<<" "<<a12<<endl ;
    cout<<a20<<" "<<a21<<" "<<a22<<endl ;
     
    return 0 ;
}

  