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
#define rep(i, a, n) for (int i = a; i <=n; ++i)
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll arr(n);
        rep(i, 0, n - 1) cin >> arr[i];

        bool CHK = false;
        for (int j = 1; j < n - 1; j++) {
            if (arr[j] > arr[j - 1] && arr[j] > arr[j + 1]) {
                YES
                cout << j << " " << j + 1 << " " << j + 2 << "\n";
                CHK = true;
                break;
            }
        }

        if (!CHK) NO
    }
    return 0;
}
