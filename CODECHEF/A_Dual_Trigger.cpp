#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool possible = true;
        
        
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == '0' && s[i + 1] == '0') {
                possible = false;
                break;
            }
        }
        
        // Check if the first and last elements are different
        if (s[0] != s[n - 1]) {
            possible = true;
        }
        
        // Output the result
        cout << (possible ? "YES" : "NO") << endl;
    }
    
    return 0;
}
