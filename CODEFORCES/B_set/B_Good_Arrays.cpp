#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1) cout<<"NO"<<endl;
        else{
        ll c = 0,t=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1) c++;
            else t+=arr[i]-1;
        }
        if(t>=c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }
    }
    
 
    return 0;
}


