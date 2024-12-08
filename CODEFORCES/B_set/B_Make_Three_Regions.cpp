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

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

string s[2];


int main() {
    fastread();
    int t; 
    cin >> t; 
    while (t--) {
         int n; 
    cin >> n;
    cin >> s[0] >> s[1];

    int cnt = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < n - 1; j++) {
            bool flag = (s[i][j] == '.' && s[i][j - 1] == '.' && s[i][j + 1] == '.');
            flag &= (s[!i][j] == '.' && s[!i][j - 1] == 'x' && s[!i][j + 1] == 'x');
            cnt += flag;
        }
    }

    p(cnt);
    }
    return 0;
}
