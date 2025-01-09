#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, n) for (int i = a; i < n; ++i)
using namespace std;

bool brute_prime(int n) {
    if (n <= 1) return false;
    rep(i, 2, n) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// n = a * b and after sqrt(n), a gets reversed to b, so we avoid the second half as the first part is valid
// 1 * 24
// 2 * 12
// 3 * 8
// 4 * 6 -> flip
// 6 * 4
// 8 * 3
// 12 * 2
// 24 * 1
bool opt1_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// bool sieveofEratosthenes(int n) {
//     // Tc - O(log(n))
//     // Mark all multiples of prime numbers less than N; what is left are the prime numbers.
//     if (n <= 1) return false;
//     const int limit = 1e6; 
//     vector<bool> is_prime(limit + 1, true);
//     is_prime[0] = is_prime[1] = false;

//     for (int i = 2; i * i <= limit; i++) {
//         if (is_prime[i]) {
//          // as number less than i*i will already be marked in prev round
//          // 2*2 , 2*3, 2*4, 2*5, 2*6 ..... 
//          // 3*2, 3*3, 3*4, 3*5 ....... 
//          // 5*2 , s*3 , s*4 .......... 
//          // as 5*2 is already marked so we can jump directly to i*i
//             for (int j = i * i; j <= limit; j += i) {
//                 is_prime[j] = false;
//             }
//         }
//     }
//     return n <= limit && is_prime[n];
// }

bool seive(int n){
   if(n<=1) return false; 
   long  limit = 10e6;
   vector<bool> is_prime(limit+1 , true); 
   is_prime[0]= is_prime[1]=false; 

   for(int i =2 ;i*i<= limit ; i++){
      if(is_prime[i]){

         for(int j=i*i ; j <= limit ; j++){
is_prime[j] = false;
         }
      }
   }
   return n<= limit  && is_prime[n];
}


vector<bool> precomputePrimes(int maxN) {
    vector<bool> is_prime(maxN + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= maxN; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

// void findfactor(int n ){
//     // [ 2, root(n)]
//     // i *i ennsure i know it has altest 2 factor to make number i * make sure i remove the samller number from the 2 number 
    
//     for(int i =2 ; i*i<=n ; i++){
//         // remove all the i from n which are prime 
//         while(n %i ==0){
//             cout<< i <<endl;
//             // we update the n after finfinht first prime 
//             n/=i;  // will print like  2 .2 2 2 3 3, 3  .... 
//         }
//     }
//     if(n!=1){
//         // this for last number  as we use  n* 2 it doesnot allow use to go till the last number if it has one factor or 3*7  it  will give the3 as it will got till root(7)  if it is 3*7*7 the i can get 7  for that use if n!=1 we print n 
//         cout<< n <<endl;
//     }

// }

// vector<int> findfactor(int n ){
//    vector<int> fact;
//     for( ll i =2 ; i*i<=n ; i++){
//         while(n %i ==0){
//             fact.push_back( i );
//              n/=i;  
//         }
//     }
//     if(n>1){
//         fact.push_back( n);
//     }
//     return fact;
// }


int main() {
    // int t;
    // cin >> t;

    // const int maxN = 1e6; 
    // vector<bool> is_prime = precomputePrimes(maxN);

    // cout << "Brute Force: " << (brute_prime(t) ? "Prime" : "Not Prime") << endl;
    // cout << "Optimized: " << (opt1_prime(t) ? "Prime" : "Not Prime") << endl;
    // cout << "Sieve of Eratosthenes: " << (seive(t) ? "Prime" : "Not Prime") << endl;

    // cout << "First 10 primes: ";
    // int count = 0;
    // for (int i = 2; i <= maxN && count < 10; i++) {
    //     if (is_prime[i]) {
    //         cout << i << " ";
    //         count++;
    //     }
    // }
    // cout << endl;

//    vector<int> arc= findfactor(7);
//    for(auto it : arc){
//     cout<< it << " " ; 
//    }

    return 0;
}

