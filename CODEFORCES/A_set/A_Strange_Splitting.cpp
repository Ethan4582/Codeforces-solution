#include <bits/stdc++.h>
 
using namespace std;
 

void check_color(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==a[n-1]){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<"RB";
    for(int i=0;i<n-2;i++) cout<<"R";
    cout<<'\n';
    
}
 
int main() {

 
    int t;
    cin>>t;
    while(t--){
        
        check_color();
    }
    return 0;
}