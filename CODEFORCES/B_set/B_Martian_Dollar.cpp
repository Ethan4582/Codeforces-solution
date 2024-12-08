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
 
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 
 
using namespace std;
 
const int N = 1000000; 
int prime[N];
vector<int> pr;
 
 

int main() {
    int n, b;
    cin >> n >> b;

    int maximum = b;
    vector<int> dollars(n);
    for (int i = 0; i < n; ++i) {
        cin >> dollars[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int can_buy = b / dollars[i];
            int more = b % dollars[i];
            int sell = can_buy * dollars[j] + more;
            if (sell > maximum) {
                maximum = sell;
            }
        }
    }

    cout << maximum << endl;

    return 0;
}
