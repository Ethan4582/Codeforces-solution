
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define rep(i,a,n) for (int i=a;i<n;i++)
#define fastread()      (ios_base::sync_with_stdio(false),cin.tie(NULL));

using namespace std;
int main()
{
    fastread();
    int n ;
    cin>>n ;
    
    while(n--){
        int N , X ;
        cin>> N >>X; 
        int subscription = (N+5)/6 ; 
        
        int cost = subscription*X;
        
        cout<< cost <<endl; 
    }
    
    
    

    return 0;


}
