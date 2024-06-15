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
    
//     int t  ; 
//     cin >>t  ; 
//     while(t--){
//       int n , cnt =0 ; 
//       cin>>n ; 
//       rep( i , 1 ,n+1 ){
//          if ( n%i==0){
//             cnt++;
//          }
//       }

//       p(cnt);
   
//   }
//     return 0;
// }



//! optmizw way


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
    
//     ll  t  ; 
//     cin >>t  ; 
//     while(t--){
//       ll n , cnt =0 ; 
//       cin>>n ; 
//       for (ll  i = 1; i*i <= n; i++){
//          if (n % i == 0){
//             cnt++;
//             if (i != n / i) {
//                 cnt++;
//             }
//          }
//       }

//       p(cnt);
   
//   }
//     return 0;
// }




//?   more optmize way  

#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
ll sieve_size;
bitset<10000010>bs;
vector<ll>primes;
void Sieve(ll x){
    sieve_size=x;
    ll count=0;
    bs.set();
    bs[0]=bs[1]=false;
    for(ll i=2;i<=sieve_size;i++){
        if(bs[i]){
            for(ll j=i*i;j<=sieve_size;j+=i){
                bs[j]=false;
            }
            primes.emplace_back(i);
            count++;
        }
    }
}


ll CountDivisors(ll x){
    ll i=0,PF=primes[i],ans=1;
    while(PF*PF<=x){
        ll power=0;
        while(x%PF==0){
            x/=PF;
            power++;
        }
        ans*=power+1;
        PF=primes[i++];
    }
    if(x!=1) ans*=2; // 
    return ans;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        Sieve(x);
        cout<<CountDivisors(x)<<"\n";
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// template<typename... T>
// void see(T&... args) { ((cin >> args), ...);}
// template<typename... T>
// void put(T&&... args) { ((cout << args << " "), ...);}
// template<typename... T>
// void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}
// #define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
// void err(istream_iterator<string> it) {}
// template<typename T, typename... Args>
// void err(istream_iterator<string> it, T a, Args... args) {cerr << *it << "=" << a << ", "; err(++it, args...);}
// #define int long long
// #define pb push_back
// #define F first
// #define S second
// #define ll long long
// #define ull unsigned long long
// #define ld long double
// #define pii pair<int,int>
// #define vi vector<int>
// #define vii vector<pii>
// #define vc vector
// #define L cout<<'\n';
// #define E cerr<<'\n';
// #define all(x) x.begin(),x.end()
// #define rep(i,a,b) for (int i=a; i<b; ++i)
// #define rev(i,a,b) for (int i=a; i>b; --i)
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// #define setpr(x) cout<<setprecision(x)<<fixed
// #define sz size()
// #define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
// #define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
// #define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
// const ll inf = INT_MAX;
// const ld ep = 0.0000001;
// const ld pi = acos(-1.0);
// const ll md = 1000000007;

// #define MAX 1000005
// int spf[MAX];
// void sievespf(int n) {
//     for (int i=1; i<=n; i++){
//         spf[i] = i;
//     }
//     for (int p=2; p*p<=n; p++) {
//         if (spf[p] == p) {
//             for (int i=p*p; i<=n; i += p) 
//                 if (spf[i]==i) spf[i]=p; 
//         }
//     } 
// } 
// void solve(){
//     int x; see(x);
//     int ans=1;
//     while (x!=1){
//         int y = spf[x];
//         int c=1;
//         while(x%y==0){
//             c++; x/=y;
//         }
//         ans*=c;
//     }
//     put(ans);
// }    
// signed main(){
//     IOS;
//     #ifdef LOCAL
//     freopen("input.txt", "r" , stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     int t=1;
//     cin>>t;
//     sievespf(1000000);
//     while(t--){
//         solve();
//         cout<<'\n';
//     }
//     #ifdef LOCAL
//     clock_t tStart = clock();
//     cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
//     #endif
// }


