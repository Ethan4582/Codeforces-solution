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

int main() {
    string s, t;
    cin >> s >> t;

    
    if (s.length() != t.length()) {
        cout << "NO" << endl;
        return 0;
    }

    int n = s.length();
    int diff_count = 0;
    int diff_pos1 = -1, diff_pos2 = -1;


    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            ++diff_count;
            if (diff_count == 1) {
                diff_pos1 = i;
            } else if (diff_count == 2) {
                diff_pos2 = i;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    
    if (diff_count == 0 || diff_count > 2) {
        cout << "NO" << endl;
        return 0;
    }

    swap(s[diff_pos1], s[diff_pos2]);
    if (s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}