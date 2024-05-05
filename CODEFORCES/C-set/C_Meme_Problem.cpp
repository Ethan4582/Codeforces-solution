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
using namespace std;
long double bs(long double s,long double e,long long d){
    if(s<=e){
        long double mid=s+(e-s)/2;
        long double ans =mid*(d-mid);
      
       
       if(abs(mid*(d-mid))<=0.000001) return mid;
        else if(ans>d ) return bs(mid+0.000000001,e,d);
        else return bs(s,mid-0.000000001,d);
    }
    return s;
}

int main() {
    int t;
    cin>>t;
    while(t--){
           
        long long d;
        cin>>d;
        long double a;
        
       a =bs(0,1000000000,d);
       cout.precision(10);
       if(d==0){
            cout<<fixed<<"Y"<<" "<<0.000000<<" "<<0.000000<<endl;
       }
       else if(d==1){
           cout<<"N"<<endl;
       }
       else if(d==4){
             cout<<fixed<<"Y"<<" "<<2.000000<<" "<<2.000000<<endl;
       }
       else if(abs((a*(d-a))-d)<=0.000001){
           cout<<fixed<<"Y"<<" "<<a<<" "<<d-a<<endl;
       }else{
           cout<<"N"<<endl;
       }
    }
 


    return 0;
}