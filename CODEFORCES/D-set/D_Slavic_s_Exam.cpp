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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--) {
        string s, t; 
        cin >> s >> t;
        int x = 0;
        int k = t.size();

        for(int i = 0; i < (int)s.size(); ++i) {
            if(s[i] == '?') {
                if(x < k) s[i] = t[x++];
                else s[i] = 'a';
            } else if(s[i] == t[x]) ++x;
        }
        if(x >= t.size()) cout << "YES\n" << s << "\n";
        else NO;
    }
    return 0;
}
