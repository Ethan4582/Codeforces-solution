#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; ++test_case) {
        int n;
        cin >> n;
        
        vector<int> s1(n);
        vector<int> s2(n);
        
        
        for (int i = 0; i < n; ++i) {
            char ch;
            cin >> ch;
            s1[i] = ch - '0';
        }

        for (int i = 0; i < n; ++i) {
            char ch;
            cin >> ch;
            s2[i] = ch - '0';
        }

        int add = 0;
        int remove = 0;

       
        for (int i = 0; i < n; ++i) {
            if (s1[i] < s2[i]) {
                ++add;
            } else if (s1[i] > s2[i]) {
                ++remove;
            }
        }

        
        cout << max(add, remove) << endl;
    }

    return 0;
}
