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

// using namespace std;

// void generstsumsequence(int index, vector<int>& arr, int currentSum, set<int>& sums) {
//     if (index == arr.size()) {
//         sums.insert(currentSum);
//         return;
//     }
   
  
//     generstsumsequence(index + 1, arr, currentSum + arr[index], sums);
    
   
//     generstsumsequence(index + 1, arr, currentSum, sums);
// }

// set<int> setsequncerecsive(vector<int>& arr) {
//     set<int> sums;
//     generstsumsequence(0, arr, 0, sums);
//     return sums;
// }

// int main() {
//     fastread();
    
//     int n; 
//     cin >> n; 
//     vi a(n);
//     rep(i, 0, n) {
//         cin >> a[i];
//     }

//     set<int> sums = setsequncerecsive(a);

    
//     int maxOddSum = -1; 
//     for (int sum : sums) {
//         if (sum % 2 != 0) {
//             maxOddSum = max(maxOddSum, sum);
//         }
//     }

   
//     if (maxOddSum != -1) {
//         p(maxOddSum);
//     } else {
//         p(-1);
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define vi vector<int>
#define p(a) cout << a << "\n";
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    
    int n; 
    cin >> n; 
    vi a(n);
    
    long long sum = 0;
    int maxOddNegative = INT_MIN; 
    int minOddPositive = INT_MAX; 

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 0) {
            sum += a[i]; 
            if (a[i] % 2 != 0) {
                minOddPositive = min(minOddPositive, a[i]); 
            }
        } else if (a[i] < 0 && a[i] % 2 != 0) {
            maxOddNegative = max(maxOddNegative, a[i]); 
        }
    }

   
    if (sum % 2 == 0) {
       
        if (minOddPositive != INT_MAX && maxOddNegative != INT_MIN) {
            sum -= min(minOddPositive, -maxOddNegative);
        } else if (minOddPositive != INT_MAX) {
            sum -= minOddPositive; 
        } else if (maxOddNegative != INT_MIN) {
            sum -= -maxOddNegative; 
        }
    }

  
    p(sum);
    
    return 0;
}
