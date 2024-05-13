// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define f first
// #define s second
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define p2(a, b) cout << a << " " << b << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//         int k;
//         cin >> k;
        
//         vector<int> a(k); 
//         for (int i = 0; i < k; ++i) {
//             cin >> a[i]; 
//         }

//         bool swapped = true;
//         while (swapped) {
//             swapped = false;
//             for (int i = 0; i < k - 1; ++i) {
//                 if ((a[i] ^ a[i + 1]) < 4) {
//                     if (a[i] > a[i + 1]) {
//                         swap(a[i], a[i + 1]);
//                         swapped = true;
//                     }
//                 }
//             }
//         }

//         for (auto it : a) {
//             cout << it << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }


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


int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int power(int x, int y, int MOD) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        return power((x * x) % MOD, y / 2, MOD) % MOD;
    } else {
        return (x * power((x * x) % MOD, (y - 1) / 2, MOD) % MOD) % MOD;
    }
}

//For combiabtion  Ncr= N-1 Cr-1 +  n-1Cr
int combinations(int x, int y) { if (x == 0) return 0;  if (y == 0) return 1; return combinations(x-1, y-1) + combinations(x-1, y);}


#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

const int N = 1000000; 
int prime[N];



using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, priority_queue<int>> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]>>2].push(-a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << -mp[a[i]>>2].top() << " ";
        mp[a[i]>>2].pop();
    }
    cout << endl;
}
 
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}