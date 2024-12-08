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


void solve() {
    int n;
    cin >> n;
    vector<int> grph(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> grph[i];
    }
    
    auto solve = [](const vi& adj, int size) -> long long {
        vi clr(size + 1, 0);  
        ll res = 0;
        
       
        auto cyszie = [&](int srt) -> int {
            if(clr[srt] == 2) return 0;
            
            stack<int> pth;
            unordered_map<int, int> pos;
            int crr = srt;
            while(clr[crr] != 1) {
                if(clr[crr] == 2) return 0;
                
                clr[crr] = 1;
                pos[crr] = pth.size();
                pth.push(crr);
                crr = adj[crr];
            }
            
            int cyclen = pth.size() - pos[crr];
            
            // mrk all nodes 
            while(!pth.empty()) {
                clr[pth.top()] = 2;
                pth.pop();
            
            }   
            return cyclen >= 3 ? cyclen : 0;
        };
        
       
        for(int vrtx = 1; vrtx <= size; vrtx++) {
            int cycsz = cyszie(vrtx);
            if(cycsz >= 3) {  res += (cycsz - 1) / 2; }
        }
        
        return res;
    };
    
    p(solve(grph, n));
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    return 0;
}