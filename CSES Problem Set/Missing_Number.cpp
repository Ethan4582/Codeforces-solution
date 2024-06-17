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



// using namespace std;

// int main() {
    
//      int k ;
//      cin >>k ;
   
//            vector<int> a(k); 
//            for (int i = 0; i < k; ++i) {
//                cin >> a[i]; 
//            }
//   sort(all(a));
//   rep( i , 1 , k){
//    if (a[i]!=i){
//       p(i);
//    }
//   }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
   
    vector<int> a(k); 
    for (int i = 0; i < k; ++i) {
        cin >> a[i]; 
    }
    
    
    unordered_set<int> s(a.begin(), a.end());
    
    
    for (int i = 1; i <= k; ++i) {
        if (s.find(i) == s.end()) {
            cout << i << "\n";
        }
    }

    return 0;
}

//-----------------------------  THIRD APPROCH

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll cnt[n+1]={};
    for(int i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        cnt[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(cnt[i]==0)
        {
            cout<<i;
            return 0;
        }
    }
}



