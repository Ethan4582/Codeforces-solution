#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    bool isConvex = true;

    // Directions for exploring neighboring cells: up, down, left, right
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    // Iterate through each black cell
    for (int i = 0; i < n && isConvex; ++i) {
        for (int j = 0; j < m && isConvex; ++j) {
            if (grid[i][j] == 'B') {
                int blackCount = 0;

                // Explore neighboring cells in all four directions
                for (int k = 0; k < 4; ++k) {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    // Check boundary conditions
                    if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'B') {
                        blackCount++;
                    }
                }

                // If blackCount is greater than 2, the grid is not convex
                if (blackCount > 2) {
                    isConvex = false;
                }
            }
        }
    }

    cout << (isConvex ? "YES" : "NO") << endl;

    return 0;
}
