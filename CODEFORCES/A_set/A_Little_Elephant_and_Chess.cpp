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
    
    int t = 8; 
    
    bool ans = true;
    cin.ignore(); 
    
    while (t--) {
        string s;
        getline(cin, s);
        
        if (s.find("BB") != string::npos || s.find("WW") != string::npos) {
            ans = false;
            break;
        }
    }
    
   
    if(ans){
      YES;
    }
    else{
      NO;
    }

    return 0;
}
