#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> table(n);
    for (int i = 0; i < n; ++i) {
        cin >> table[i];
    }

    int minRow = n, maxRow = -1, minCol = m, maxCol = -1;

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (table[i][j] == 'B') {
                minRow = min(minRow, i);
                maxRow = max(maxRow, i);
                minCol = min(minCol, j);
                maxCol = max(maxCol, j);
            }
        }
    }

    
    int centerRow = (minRow + maxRow) / 2 + 1; // 
    int centerCol = (minCol + maxCol) / 2 + 1; 

    
    cout << centerRow << " " << centerCol << endl;

    return 0;
}
