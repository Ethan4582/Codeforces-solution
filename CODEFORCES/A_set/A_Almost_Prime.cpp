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
#define rep(i, a, n) for (int i = a; i <=n; ++i)
#define p(a) cout << a << "\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

vector<bool> precompe(int n){
   vector<bool> is_prime(n+1, true); 
   is_prime[0] = is_prime[1] = false; 

   for( int i = 2 ; i * i <= n; i++){
      if(is_prime[i]){
         for(int j = i * i; j <= n; j += i){
            is_prime[j] = false;
         }
      }
   }

   return is_prime;
}

int main() {
    fastread();
   
        int n; 
        cin >> n; 
        vector<bool> pr = precompe(n); 
        vll prmcntforeachnum(n + 1, 0); 

  
        rep(i , 2, n){
            if(pr[i]){
                for(int j = i; j <= n; j += i){
                    prmcntforeachnum[j]++; 
                }
            }
        }


        int ans = 0;
        rep(i , 2, n){
            if(prmcntforeachnum[i] == 2){
                ans++;
            }
        }
        
        p(ans); 

    return 0;
}
