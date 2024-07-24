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
#define rep(i, a, n) for (int i = a; i <=n; ++i)
#define p(a) cout << a << "\n";
#define p2(a, b) cout << a << " " << b << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

const ll mod = 1e9 + 7;

using namespace std;

bool solve(string s) {
    if (s.length() < 5 || s[0] != 'A') {
        return false;
    }
    
    int cCount = 0;
    bool allLower = true;
    
    rep(i,2, s.size() - 2) {
        if (s[i] == 'C') {
            cCount++;
        }
        if (isupper(s[i]) && s[i] != 'C') {
            allLower = false;
            break;
        }
    }
    
    return cCount == 1 && allLower;
}

int main() {
    string s;
    cin >> s;
    if (solve(s)) {
      p("AC");
    } else {
        p("WA");
    }
    return 0;
}
