

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


void process() {
    int m; 
    cin >> m; 
    vector<int> arr(m);
    for (auto& y : arr) cin >> y;
    sort(arr.begin(), arr.end());
    if (arr.front() == arr.back()) {
        cout << "-1\n";
        return;
    }
    int dx = 0;
    while (arr[dx] == arr[0]) dx++;
    cout << dx << " " << m - dx << "\n";
    for (int k = 0; k < dx; ++k) cout << arr[k] << " ";
    for (int k = dx; k < m; ++k) cout << arr[k] << " ";
}


int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
     process();
  }
    return 0;
}