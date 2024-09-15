#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 

    int N; 
    cin >> N; 

    vl m(N); // Vector to store frequency of remainders
    long long psum = 0; // Initialize prefix sum
    m[psum] = 1; // Count the prefix sum of 0 (base case)

    for (int i = 0; i < N; i++) {
        int k; 
        cin >> k; 
        psum += k; 
        
        m[(psum % N + N) % N]++;
    }
   //  Modulo Operation: If the difference between two prefix sums is divisible by  n, then the sum of the elements between those two indices is also divisible by n. This can be checked using the modulo operation.

    ll ans = 0; 
    for (ll x : m) {
        ans += x * (x - 1) / 2; // Calculate combinations of pairs
    }
    
    cout << ans << endl; 
    return 0; 
}
