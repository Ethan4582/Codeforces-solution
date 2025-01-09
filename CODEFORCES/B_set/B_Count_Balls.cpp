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
//     ll k , blue, red, cnt=0; 
//     cin>>k>>blue>>red; 
//     ll i=1;    ///  blue =3  red= 4  bbbrrrrb
//     while(k>0){
//       if(i%2!=0){// indicating blue ball 
//       if(k<blue){
//           cnt+=k%blue;
//       k-=blue;
//       }else{
//           cnt+=blue;
//       k-=blue;
//       }
//       }else{// inidaction red ball 
//       k-=red;
//       }
//       i++;
//     }

//     p(cnt);

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

int main() {
    fastread();
     int n;
        cin >> n;
        ll a, b;
        cin >> a >> b;

        ll tot = (n / (a + b)) * a + min(a, n % (a + b));
        cout << tot << endl;
    return 0;
}