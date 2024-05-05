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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;



int main() {
    fastread();
    string s1, s2; 
    cin >> s1 >> s2;
    long long  n = s1.size();

    vector<long long > ind;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            ind.pb(i);    
        }
    }

    if (n == ind.size()) {
        p("impossible");
    } else {
        for (int i : ind) {
            if (s1[i] == '0') {
                s1[i] = '1';
            } else {
                s1[i] = '0';
            }
        }
        reverse(s1.begin(), s1.end());
        p(s1);
    }

    return 0;
}





#include <iostream>
using namespace std;

string compare(string a, string b) {
    if(a > b) {
        string t = a;
        a = b;
        b = t;
    }
    int c = 0, d = a.length(), i, j;
    for(i = 0; i < d; i++)
        if (a[i] != b[i]) c++;
    if (c % 2 > 0) return "impossible";
    for(j = c, i = 0; i < d && j > c / 2; i++)
        if (a[i] != b[i]) {
            b[i] = a[i];
            j--;
        }
    return b;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << compare(a, b);
}

