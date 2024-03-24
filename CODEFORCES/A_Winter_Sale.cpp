#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
   
    int X;
    double P;
    cin >> X >> P;

    double discountedPrice = P;
    double originalPrice = discountedPrice / (1 - (X / 100.0));


    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
