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

using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi arr(n + 1); // 1
        rep(i, 1, n + 1) {
            cin >> arr[i];
        }

        int max_k = 0;
        rep(i, 1, n + 1) {
            int diff = abs(arr[i] - i);
            if (diff != 0) {
                if (max_k == 0) {
                    max_k = diff;
                } else {
                    max_k = __gcd(max_k, diff);
                }
            }
        }

       p( max_k);
    }
    return 0;
}