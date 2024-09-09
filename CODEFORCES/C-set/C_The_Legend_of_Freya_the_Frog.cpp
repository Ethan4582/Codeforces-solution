

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

// ll solve(ll x,  ll y,  ll k) {
    
//      ll movx = (x + k - 1) / k;  
//      ll movy = (y + k - 1) / k;  

    
//     ll  tmov = max(movx, movy) * 2;
//     if (movx > movy) {
//         tmov -= 1;
//     }

//     return tmov;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//      ll t;
//     cin >> t;

//     while (t--) {
//          ll x, y, k;
//         cin >> x >> y >> k;
//        p(solve(x, y, k))
//     }

//     return 0;
// }


#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int,int> 
#define vs vector<string>
#define vpii vector<pair<int, int>>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 


int64_t ceil_div(int64_t a, int64_t b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}
 

int main() {
    fastread();
    int t ; 
    cin >>t ; 
    while(t--){
        int x , y, k ; 
        cin>>x>>y>>k ;  
        x= ceil_div(x, k);
        y= ceil_div(y, k);
        p(max(2*x-1 , 2*y))
   
  }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;

void solv(int n, int k, vector<long long>& a) {
    for (int i = 0; i < k; i++) {
       
        long long x = a.front();
        long long y = a.back();

       
        a.erase(a.begin()); 
        a.pop_back();       

        a.push_back(x + y);

      
        sort(a.begin(), a.end());
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        solv(n, k, a);

        for (const auto& num : a) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
