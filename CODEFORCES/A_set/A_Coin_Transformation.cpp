#include <iostream>
#include <unordered_map>
using namespace std;


unordered_map<long long, long long> memo;

long long maxCoins(long long n) {
  
    if (n <= 3) return 1;

   
    if (memo.count(n)) return memo[n];
    long long result = maxCoins(n / 4) + maxCoins(n / 4);
    memo[n] = result;
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
       
        cout << maxCoins(n) << endl;
    }
    return 0;
}


// 


