#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"O-|-OOOO"<<"\n";
        return 0;
    }
    while(n)
    {
        int r=n%10;
        if(r>4)
        {
            cout<<"-O|";
            int l=r-5;
            int c=l;
            while(l>0)
            {
                cout<<"O";
                l--;
            }
            int m=4-c;
            cout<<"-";
            while(m>0)
            {
                cout<<"O";
                m--;
            }
        
        }
        else
        {
            cout<<"O-|";
            int l=4-r;
            int m=l;
            while(r>0)
            {
                cout<<"O";
                r--;
            }
          
            cout<<"-";
            while(m>0)
            {
                cout<<"O";
                m--;
            } 
        }
        n/=10;
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}

