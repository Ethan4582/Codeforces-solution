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
    int n;
    cin >> n;
    
    map<int, int> num;
    int a;
    
    for (int i = 0; i < n; ++i) {
        cin >> a;
        num[a]++;
    }
 
    for (auto& it : num) {
        int size = it.first;
        if (num[size] > 0 && num[size+1] > 0 && num[size+2] > 0) {
            p("YES")
            return 0;
        }
    }
 
   p("NO")

    return 0;
}