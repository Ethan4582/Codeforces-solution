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
    
    int t; 
    cin >> t; 
    while(t--){
        int n, k;
        cin >> n >> k; 

        vll arr(k);
        int cnt = 0;

        for (int i = 0; i < k; i++) {
            cin >> arr[i];
        }
        sort(all(arr));

        rep( i  , 0 , k-1){
         cnt+=2*arr[i]-1;
        }

        p(cnt);
    }
    return 0;
}
