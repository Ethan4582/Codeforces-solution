#include <iostream>
#include <vector>

using namespace std;


/*

int main()
{
    int x11, x12, x13, x21, x22, x23, x31, x32, x33;
    cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
    cout << ((x11 + x12 + x21) % 2 == 0 ? "1" : "0") << ((x11 + x12 + x13 + x22) % 2 == 0 ? "1" : "0") << ((x12 + x13 + x23) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x11 + x21 + x22 + x31) % 2 == 0 ? "1" : "0") << ((x12 + x21 + x22 + x23 + x32) % 2 == 0 ? "1" : "0") << ((x13 + x22 + x23 + x33) % 2 == 0 ? "1" : "0") << endl;
    cout << ((x21 + x31 + x32) % 2 == 0 ? "1" : "0") << ((x22 + x31 + x32 + x33) % 2 == 0 ? "1" : "0") << ((x23 + x32 + x33) % 2 == 0 ? "1" : "0") << endl;
    return 0;
}

*/

int main() {
    vector<vector<int>> grid(3, vector<int>(3));

    // Reading input
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> grid[i][j];
        }
    }

    // Output calculation
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum = grid[i][j];
            if (i > 0) sum += grid[i - 1][j];
            if (i < 2) sum += grid[i + 1][j];
            if (j > 0) sum += grid[i][j - 1];
            if (j < 2) sum += grid[i][j + 1];

            cout << (sum % 2 == 0 ? "1" : "0");
        }
        cout << endl;
    }

    return 0;
}
