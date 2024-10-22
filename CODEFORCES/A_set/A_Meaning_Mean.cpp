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

using namespace std;

int main() {
    fastread();
    int t, n;

    auto check = [&]() {
        cin >> n;
        multiset<int> s;
        vi arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        while (s.size() > 1) {
            auto b2 = s.begin();
            auto a1 = next(b2);
            int a = *b2; s.erase(b2);
            int b = *a1; s.erase(a1);
            s.insert((a + b) / 2);
        }
        p(*s.begin())
    };

    cin >> t;
    while (t--) {
        check();
    }

    return 0;
}