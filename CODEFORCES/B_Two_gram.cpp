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

int a[N]; 
bool c[N]; 

int main() {
    fastread();
    int t ; 
    cin >> t ; 
    string s; 
    cin >> s; 
    
    map<string, int> mpp; 
    
     for(int i=0; i<s.size()-1; i++ )
    {   string f = "";
        f += s[i];
        f += s[i + 1];
 
        mpp[f]++;
 
    }
    
    string ans_s; 
    int max_cnt = -1;
    
    for(auto &[curr, cnt] : mpp) {
        if(cnt > max_cnt) {
            max_cnt = cnt;
            ans_s = curr;
        }
    }
    
    p(ans_s);
    
    return 0;
}