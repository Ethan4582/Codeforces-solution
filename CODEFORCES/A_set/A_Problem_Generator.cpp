#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

      
        vector<int> prm_count(7, 0);
        
        for (char c : a) {
            prm_count[c - 'A']++;
        }

        int cnt = 0;

       
        for (int i = 0; i < 7; ++i) {
            
            if (prm_count[i] < m) {
                cnt += m - prm_count[i];
            }
        }

        cout << cnt<< endl;
    }

    return 0;
}
