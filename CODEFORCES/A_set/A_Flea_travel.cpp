
#include<bits/stdc++.h>

using namespace std;

int main()

{

    long long n;

    cin>>n;

    while(n%2==0)

    {

        n=n/2;

    }

    if(n==1)

        cout<<"YES"<<endl;

    else

        cout<<"NO"<<endl;

}