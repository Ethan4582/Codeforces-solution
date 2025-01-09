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

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll org(n), nw(n);
        set<int> us; 
        int mxt = 1; 

        for (int i = 0; i < n; ++i) {
            cin >> org[i];
        }

        for (int i = 0; i < n; ++i) {
            if (us.find(org[i]) == us.end()) {
                nw[i] = org[i]; 
                us.insert(org[i]);
            } else {
                while (us.find(mxt) != us.end()) {
                    mxt++; 
                }
                nw[i] = mxt;
                us.insert(mxt);
            }
        }

        for (auto it : nw) {
            cout << it << " ";
        }
        cout << "\n";
    }
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

// int main() {
//     fastread();
//     int t ; 
//     cin >>t ; 
//     while(t--){
//        ll n; cin>>n;
//        vector<ll>v(n);
//        vector<ll>u(n);
//        set<ll>s;
//        for(int i=0; i<n; i++)
//        {
//         cin>>v[i];
//         s.insert(i+1);
//        } 
//        set<ll>ss;
//        for(ll i=0; i<n;i++)
//        {
//         if(ss.find(v[i])==ss.end())
    
//         {
//              u[i]=v[i];
//              ss.insert(v[i]);
//              s.erase(v[i]);
 
//         }
//        else 
//         {
//             u[i]=*s.begin();
//             s.erase(s.begin());
//             ss.insert(u[i]);
//         }
//        }
//         for(auto i:u)
//         cout<<i<<" ";
//         cout<<endl;
  
   
//   }
//     return 0;
// }