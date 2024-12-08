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


// const ll mod = 1e9 + 7;


// using namespace std;

// int main() {
    
//     int t ; 
//     cin >>t ; 
//     while(t--){

//       ll n , a , b  , ans=0; 
//       cin>>n>>a>>b; 

//       rep( i , 1 , n+1){
//          if ((b-i+1)>=a){
//             ans+=a;
//          }
//          else{
//             ans+=a;
//          }

//       }

// p(ans);


   
//   }
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


const ll mod = 1e9 + 7;


using namespace std;

int main() {
    
    int t ; 
    cin >>t ; 
    while(t--){
      ll n,a,b;
    cin>>n>>a>>b;
    if(b<=a){
        cout<<n*a<<endl;
       
    }else{
        ll k=min(n,b-a);
        cout<<b*(b+1)/2-(b-k)*(b-k+1)/2+(n-k)*a<<endl;
    }

   
  }
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define int long long

void Code(){
    int n,a,b;
    cin>>n>>a>>b;
    if(b<=a){
        cout<<n*a<<'\n';
        return;
    }
    if(b-a>=n-1){
        int ans=b*(b+1)/2 - (b-n)*(b-n+1)/2;
        cout<<ans<<'\n';
        return;
    }
    int ans = b*(b+1)/2 - a*(a+1)/2;
    n-=b-a;
    ans+=a*n;
    
    cout<<ans<<'\n';
}

int32_t main() {
    fastIO;
   

    int t=1;
    cin>>t;
    while(t--){
       
        Code();
    }
    return 0;
}