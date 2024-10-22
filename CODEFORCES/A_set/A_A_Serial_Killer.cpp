#include <bits/stdc++.h>
#define ll long long

using namespace std;


void print(const string& a, const string& b) {
    cout << a << " " << b << endl;
}

int main() {
   
    string a, b; 
    cin >> a >> b; 
    int n; 
    cin >> n; 

  
    print(a, b);

  
    while (n--) {
        string k, p; 
        cin >> k >> p;

    
        if (a == k) {
            a = p; 
            print(a, b); 
        } else {
            b = p; 
            print(a, b);
        }
    }
    
    return 0;
}
