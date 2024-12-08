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

int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
        int i, c0, c1, n;
      string s;
    cin >> n >> s;
    c0 = c1 = 0;
    for (i = 0; i < n; i++){
        if (s[i] == '1'){
            c1++;
        } else {
            c0++;
            while (s[i] == '0' && i < n){
                i++;
            }
            i--;
        }
    }
  p((c1 > c0 ? "Yes" : "No")) ;
    }
    return 0;
}


// If 111 exists somewhere (as a substring) in the string, the string is always transformable.
// If 11 appears at least twice in the string, the string is always transformable.
// If the string both begins and ends with 1, it is always transformable.
// If the string begins or ends with 1 and 11 exists in the string, it is always transformable.