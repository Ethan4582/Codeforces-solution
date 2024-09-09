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
    int n;
    cin >> n;
    
    for (int k = 1; k <= n; ++k) {
        // Total ways to place two knights
        long long total_ways = (long long)k * k * (k * k - 1) / 2;

         // take 8*8 matrix draw fro al the poistion moving all the postion fron r-1 to r-8  find all the possible way then muiltiply by 4 as it can be placed in 4 side of sqaure 
      // for each corener it will be 4*2 postion less than answer way to put 
      //so for placing postion possibe is (n^2)(n^2-1)/2 way to place 

      //now moving row we cover all the possible way for one boundry way we move to next innner cirecle of the chees board 
      // and subatract all the possible way to place from the total ways to place 
      //way to place is taking 2*3 borad and findway to move in row takt n-1  and coumn it takes n-2
      
        
        // Attacking ways
        long long attacking_ways = 0;
        if (k > 2) {
            attacking_ways = 4 * (k - 1) * (k - 2);
        }
        
        // Non-attacking ways
        cout << total_ways - attacking_ways << endl;
    }
    
    return 0;
}

  
