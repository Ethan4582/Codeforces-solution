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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> count1, count2;
    for (char &ch : s1) {
        if (isalpha(ch)) {
           // ch = tolower(ch);
            count1[ch]++;
        }
    }
    for (char &ch : s2) {
        if (isalpha(ch)) {
           // ch = tolower(ch);
            count2[ch]++;
        }
    }

    bool possible = true;
    for (const auto &p : count2) {
        char ch = p.first;
        if (count2[ch] > count1[ch]) {
            possible = false;
            break;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;

    return 0;
}