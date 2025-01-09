
#include <bits/stdc++.h>
using namespace std;

// // Function to check if a number is prime
// bool is_prime(int n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;

//     for (int i = 5; i * i <= n; i += 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;

//     return true;
// }

// Function to find the prime factorization of a number
map<int, int> prime_factorization(int n) {
    map<int, int> prime_factors;
    int i = 2;

    while (i * i <= n) {
        if (n % i == 0) {
            prime_factors[i]++;
            n /= i;
        } else {
            i += 1;
        }
    }

    if (n > 2) {
        prime_factors[n]++;
    }

    return prime_factors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    map<int, int> prime_factors = prime_factorization(n);

    cout << "Prime factorization of " << n << ":\n";
    for (auto it : prime_factors) {
        cout << it.first << "^" << it.second << " ";
    }
    cout << "\n";

    return 0;
}



// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int a[N]; 
// bool c[N]; 


// vector<int> primes;
// vector<bool> isPrime(31624, true); // sqrt(1e9)
// void computePrimes() {
//     for (int i = 2; i <= 31623; i++) {
//         if (!isPrime[i]) continue;
//         primes.push_back(i);
//         for (int j = i * i; j <= 31623; j += i) {
//             isPrime[j] = false;
//         }
//     }
// }
 
// int main() {
//     computePrimes();
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<pi> factors; 
//         int m = n;
//         for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++) {
//             if (m % primes[i] != 0) continue;
//             int count = 0;
//             while (m % primes[i] == 0) {
//                 m /= primes[i];
//                 factors.push_back({++count, primes[i]});
//             }
//         }
//         if (m != 1) factors.push_back({1, m});
//         sort(factors.begin(), factors.end());
        
//         ll ans = 0, carry = factors.back().second;
//         for (int i = factors.size() - 2; i >= 0; i--) {
//             if (factors[i].first != factors[i + 1].first) {
//                 ans += carry * (factors[i + 1].first - factors[i].first); // based on qn formula
//                 carry = 1;
//             }
//             carry *= factors[i].second;
//         }
//         ans += carry * factors[0].first;
//        p(ans)
//     }
// }