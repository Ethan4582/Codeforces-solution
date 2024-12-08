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

 

    string s;

   long long  int a,b,l,v;

    cin>>s;

    l=s.size();

    a=s[l-1];

    b=s[l-2];

    v=b*10+a;

    if(v%4==0){
       p(4);
    }
    else{
       p(0);
    }

     

}





#include <bits/stdc++.h> 

using namespace std; 
int fnMod(int n) 

{ 
    return (n % 4) ? 0 : 4; 

} 


int main() 

{ 
   int n ; 
   cin >> n ; 

    cout << fnMod(n); 

    return 0; 

} 