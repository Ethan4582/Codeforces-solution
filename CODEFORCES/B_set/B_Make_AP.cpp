

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
#define rep(i, a, n) for (int i = a; i < n; i++)
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
    fastread();
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int new_a = b - (c - b);
        if (new_a >= a && new_a % a == 0 && new_a != 0) {
           YES;
            continue; 
        }

        int new_b = a + (c - a) / 2;
        if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0 && new_b != 0) {
           YES;
            continue; 
        }

        int new_c = a + 2 * (b - a);
        if (new_c >= c && new_c % c == 0 && new_c != 0) {
           YES;
            continue; 
        }
NO;
     
    }
    return 0;
}
