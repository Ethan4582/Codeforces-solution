#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vl vector <ll>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
void solve (int t) {
       int n,c=0,c1=0;
       cin>>n;
       vl v(n);
       for(ll i=0;i<n;i++){
          cin>>v[i];
          if(v[i]==0){
            c++;
          }
          else{
            c1++;
          }
       }

       if (c1==n)
       {
           cout<<-1<<endl;
           return;
       }
       if(c1<9){
           cout<<0<<endl;
           return;
       }
 
       c1= c1/9 * 9;
       for(ll i=0;i<c1;i++){
            cout<<5;
       }
       for(ll i=0;i<c;i++){
        cout<<0;
       }

       cout<<endl;
       
}

int main() {
   FAST ;
   int t = 1 ;
//    cin >> t ;
   while (t--) {
   solve (t) ;
  }
  return 0 ;
}