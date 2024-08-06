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

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        // Read the coordinates
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        // Use a set to store unique x and y coordinates
        set<int> x = {x1, x2, x3, x4};
        set<int> y = {y1, y2, y3, y4};

        // Calculate the width and height
        int width = *x.rbegin() - *x.begin(); // Max x - Min x
        int height = *y.rbegin() - *y.begin(); // Max y - Min y

        // Calculate the area
        int ans = width * height;
        p(ans);
    }
    return 0;
}
