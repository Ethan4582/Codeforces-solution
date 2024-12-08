#include <bits/stdc++.h>
#define ll long long
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << " ";
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

vector<int> prime_factors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n); 
    }
    return factors;
}

int main() {
    fastread();
    int n, k;
    cin >> n >> k;

   
    vector<int> factors = prime_factors(n);
    int num_factors = factors.size();

   
    if (num_factors < k) {
        p(-1);
        return 0;
    }

    
    vector<int> result(k, 1);
    
   
    for (int i = 0; i < k; i++) {
        if (i < num_factors) {
            result[i] = factors[i];
        }
    }

 
    for (int i = k; i < num_factors; i++) {
        result[k - 1] *= factors[i];
    }

   
    for (int i = 0; i < k; i++) {
        p(  result[i] );
    }
    cout << "\n";

    return 0;
}
