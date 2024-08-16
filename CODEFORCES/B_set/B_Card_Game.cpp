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

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
       long long x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    long long cnta = 0, cntb = 0, result = 0;
 
    if (x1 > y1) {
        cnta++;
    } else if (x1<y1) {
        cntb++;
    }
 
    if (x2>y2) {
        cnta++;
    } else if (x2 < y2) {
        cntb++;
    }
 
    if (cnta > cntb) {
        result++;
    }
 
    cnta = 0;
    cntb = 0;
 
    if (x1 > y2) {
        cnta++;
    } else if (x1 < y2) {
        cntb++;
    }
 
    if (x2 > y1) {
        cnta++;
    } else if (x2 < y1) {
        cntb++;
    }
 
    if (cnta > cntb) {
        result++;
    }
 
  p( result * 2 );
  }
    return 0;
}