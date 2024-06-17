#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int m1=0;
    int m2=0;
    for(int i=0;i<n-1;i++){
        int a;cin>>a;
        m1=max(m1,a);
    }cin>>m2;
    cout<<m1+m2<<endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
