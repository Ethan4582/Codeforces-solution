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

using namespace std;


int main() {
    fastread();
    int t, k; 
    cin >> t >> k; 
    vi a(t);
    rep(i, 0, t) {
      cin >> a[i];
    }

    unordered_map<int, int> freq;
    int distinctCount = 0; 
    int l = 0; 
    int minSegmentLength = INT_MAX; 
    int startIdx = -1; 

    
    for (int r = 0; r < t; ++r) {
        if (++freq[a[r]] == 1) { 
            distinctCount++;
        }

       
        while (distinctCount >= k) {
            if (r - l + 1 < minSegmentLength) {
                minSegmentLength = r - l + 1;
                startIdx = l;
            }
            if (--freq[a[l++]] == 0) { 
                distinctCount--;
            }
        }
    }

    if (startIdx == -1) {
        p2(-1, -1);
    } else {
        p2(startIdx + 1, startIdx + minSegmentLength); 
    }
   
    return 0;
}

