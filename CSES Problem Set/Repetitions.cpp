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


using namespace std;


int repation( string s){
   if(s.size()==0) {
      return 0 ;
   }

   int max_len=1;
   int curr_len=1;
   rep( i , 1, s.size()){
      if(s[i]==s[i-1]){
         curr_len++;
      }
      else{
         max_len= max(curr_len, max_len);
         curr_len=1;
      }
   }

     max_len = max(max_len, curr_len);

    return max_len;

  
}

int main() {
    
  string s ;
  cin>> s; 
  
  cout<< repation(s)<<endl;

    return 0;
}