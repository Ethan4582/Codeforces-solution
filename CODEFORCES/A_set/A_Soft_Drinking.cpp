


#include <bits/stdc++.h>

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));


using namespace std;
int main()
{
    fastread();
    int n  , k , l , c, d , p , nl , np ;
    cin>>n  >>k >> l>> c >> d>>p >>nl >>np;

    int dri, lim , salt; 
    dri= (k*l)/nl;
    lim=c*d ; 
    salt =p /np; 

    cout << min({dri , lim , salt})/n ;
 

    return 0;


}


