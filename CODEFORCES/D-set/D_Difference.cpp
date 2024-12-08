#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll  A, B ,C ,D;
    cin >> A >> B >> C >> D;

    ll n = (A*B) - (C*D);
    cout << "Difference = " << n << endl;

    return 0;
}
