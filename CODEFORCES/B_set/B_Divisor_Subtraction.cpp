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
// #define SIEVE seive(); 

// using namespace std;

// int smallestPrimeDivisor(int n) {
//     if (n <= 1) return -1; 
//     if (n % 2 == 0) return 2; 

//     for (int i = 3; i * i <= n; i += 2) {
//         if (n % i == 0) return i; 
//     }

//     return n; 
// }

// int solve(int n) {
//     int count = 0;
//     while (n != 0) {
//         int divisor = smallestPrimeDivisor(n);
//         if (divisor == -1) break; // No prime divisor found, exit loop
//         n -= divisor;
//         count++;
//     }
//     return count;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     p(solve(n));
    
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

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define SIEVE seive(); 

using namespace std;

const int N = 1000000; 
int prime[N];
vector<int> pr;

using namespace std;

long long get(long long n){
    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return i;
    return n;
}

int main() {
    long long n;
    cin >> n;
    long long cnt = 0;
    if (n % 2 != 0){
        n -= get(n);
        ++cnt;
    }
    cout << cnt + n / 2 << endl;
    return 0;
}