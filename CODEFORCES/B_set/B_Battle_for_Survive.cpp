

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int quer( const string &s){
    cout << "?"<< s << endl;
    cout.flush();
    int x ; 
    cin >> x ; 
    return x ; 
}


void solve(){
    int t; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        string password(n, " ");

       int has_zero = quer("0");
       int has_one = quer("1");

       password[0] = has_zero ? '0' : '1';
       for(int i = 1 ; i < n ; i++){
        string prefix = password.substr(0, i);
       if (quer(prefix + "0")){
         password[i] = '0';
       }else{
        password[i] = '1';
       }
       }
     
     c
}

int main() {
    fastread();
    solve();
    return 0;
}