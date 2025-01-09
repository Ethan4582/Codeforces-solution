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
#define rep(i, a, n) for (int i = a; i <= n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

// all the posible distinct number  of l on y^a * x^b
void printFact(int a, int b, int l) {
    set<int> fact; 
    // Iterate for possible powers of a
    rep(i, 0, 34) {
        int x = l; // Reset x to l for each i
        bool check = false; // Flag to check if a is possible
        
        // Check if l can be divided by a^i
        for (int j = 0; j < i; j++) {
            if (x % a) {
                check = true; // Found a distinct a
                break;
            }
            x /= a; 
        }
        if (check) break; // If a is not possible, break
        
        // Find all possible b for the current a
        while (true) {
            fact.insert(x);
            if (x % b) break; 
            x /= b; 
        }
    }
    p(fact.size()); 
}

int main() {
    fastread();
    int t; 
    cin >> t;
    while (t--) {
        int a, b, l; 
        cin >> a >> b >> l; 
        printFact(a, b, l); 
    }
    return 0;
}
