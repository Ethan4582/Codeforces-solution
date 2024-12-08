#include <bits/stdc++.h>
using namespace std;

void decryptString(int n, string &t) {
   
    vector<int> divisors;

   
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

   
    for (int d : divisors) {
        reverse(t.begin(), t.begin() + d);
    }

    
    cout << t << endl;
}

int main() {
    int n;
    cin >> n; 
    string t;
    cin >> t;

    decryptString(n, t);

    return 0;
}
