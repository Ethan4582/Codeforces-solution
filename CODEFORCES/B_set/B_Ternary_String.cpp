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
    int t; 
    cin >> t; 
    while(t--) {
        string s; 
        cin >> s;
        int n = s.size();
        int l =0 , r=0 ;
        unordered_map<char, int > mpp;
        int minlen= INT_MAX;

       while(r<n){
         mpp[s[r]]++;

         while(mpp['1']>0 &&mpp['2']>0 && mpp['3']>0){
            minlen=min(minlen, r-l+1);
            mpp[s[l]]--;
            l++;

         }
         r++;
       }

       if(minlen==INT_MAX){
         p(0);
       }else{
         p(minlen);
       }
    }
    return 0;
}
