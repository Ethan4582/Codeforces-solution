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

const int N = 1000000; 
int prime[N];

using namespace std;

int main() {
    fastread();
    ll k;
    cin >> k;

    set<ll> s;
    for (int i = 0; i < k; ++i) {
        ll x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() == 1 || s.size() == 2) {
        YES;
    } else if (s.size() >= 4) {
        NO;
    } else {
        vector<ll> nums(all(s));
        if (2 * nums[1] == nums[0] + nums[2]) {
            YES;
        } else {
            NO;
        }
    }

    return 0;
}
