#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int a ,b,k;
    cin>>a >>b >>k;

    if (a%k==0 && b%k==0){
      cout<<"Both"<<endl;
    }
    else if(a%k==0 && b%k!=0){
      cout<<"Memo"<<endl;
    }
     else if(a%k!=0 || b%k==0){
 cout<<"Momo"<<endl;
    }
    else{
       cout<<"No One"<<endl;

    }

    

    return 0;
}
