// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";
// #define rep(i, a, b) for (int i = a; i <= b; ++i)
// #define num(x) cin >> x
// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int a[N]; 
// bool c[N]; 

// int main() {
//     fastread();
//     int n;
//     cin >> n;
//     vector<int> inp;
//     map<int, int> freq;
//     int a;
//     rep(i, 0, n - 1) {
//         num(a);
//         inp.push_back(a);
//         freq[a]++;
//     }
//     int cnt = freq[4];
//     if (freq[1] >= freq[3]) {
//         cnt += freq[3];
//         freq[1] -= freq[3];
//         cnt += freq[2] / 2;
//         if (freq[2] % 2) {
//             cnt++;
//             freq[1] -= 2;
//             if (freq[1] < 0) {
//                 freq[1] = 0;
//             }
//         }
//         if (freq[1] > 0) {
//             cnt += ceil(freq[1] / 4.0);
//         }
//     } else {
//         cnt += freq[3];
//         cnt += ceil(freq[2] / 2.0);
//     }
//    p( cnt);
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
  int n , s, cnt[5] ={0};
  cin>>n; 
  while(n--){
   cin>>s; 
   cnt[s]+=1;
  }
  int ttl = cnt[4]+cnt[3]+cnt[2]/2;  
  cnt[1]-=cnt[3]; // fill up the 3 space;
  if(cnt[2]%2==1){
   ttl+=1; 
   cnt[1]-=2;
  }
  if (cnt[1]>0){
   ttl+=(cnt[1]+3)/4;
  }
  p(ttl);
    return 0;
}