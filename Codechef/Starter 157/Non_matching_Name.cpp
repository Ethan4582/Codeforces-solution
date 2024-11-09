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
#define YES cout << "Yes\n";
#define NO cout << "No\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 
int main() {
    int t; //
    cin >> t; 

    while (t--) {
        int n, m; 
        cin >> n >> m; 
        string sa, sb; 
        cin >> sa >> sb;

        
        set<char> st;

        
        for (char c : sa) {
            st.insert(c);
        }

       
        for (char c : sb) {
            st.insert(c);
        }

        int cnt = 0;

        for (char c = 'a'; c <= 'z'; c++) {
            if (st.find(c) == st.end()) {
                cnt++;
            }
        }

      
        if (cnt >= 1) {
            YES
        } else {
           NO
        }
    }

    return 0;
}