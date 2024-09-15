#include <bits/stdc++.h>
#define ll long long

#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

const ll mod = 1e9 + 7;
const int N = 1e5 + 5; 

using namespace std;

int a[N]; 
bool c[N]; 

int main() {
    fastread();
    int t; 
    double pi = 3.1415926535897;
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        double thea = pi / (2 * n);
        
        
        if (n == 1) {
            cout << "1.00000000000000" << endl; 
        } else {
            cout << fixed << setprecision(12) << (1 / tan(thea)) << endl;
        }
    }
    return 0;
}
