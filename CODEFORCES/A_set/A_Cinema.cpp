#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX_ROWS = 2005;
int rows, seats, queries;
int visited[MAX_ROWS][MAX_ROWS], max_dist[MAX_ROWS][MAX_ROWS];

bool check(int x, int y) {
    for (int i = max(1, x - max_dist[x][y]); i <= min(rows, x + max_dist[x][y]); i++) {
        int distance = max_dist[x][y] - abs(i - x);
        if (y - distance >= 1 && !visited[i][y - distance]) {
            cout << i << " " << y - distance << endl;
            visited[i][y - distance] = 1;
            return true;
        }
        if (y + distance <= seats && !visited[i][y + distance]) {
            cout << i << " " << y + distance << endl;
            visited[i][y + distance] = 1;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> rows >> seats >> queries;
    while (queries--) {
        int x, y;
        cin >> x >> y;
        if (!visited[x][y]) {
            cout << x << " " << y << endl;
            visited[x][y] = 1;
            continue;
        }
        for (int u = -2; u <= 2; u++) {
            for (int v = -2; v <= 2; v++) {
                if (x + u < 1 || x + u > rows || y + v < 1 || y + v > seats) continue;
                max_dist[x][y] = max(max_dist[x][y], max_dist[x + u][y + v] - abs(u) - abs(v));
            }
        }
        while (!check(x, y)) max_dist[x][y]++;
    }
    return 0;
}



//!  time limit excited  but  esier to implemnt 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX_ROWS = 2005;
int rows, seats, queries;
vector<vector<bool>> visited(MAX_ROWS, vector<bool>(MAX_ROWS, false));


pair<int, int> findNearestUnvisitedSeat(int x, int y) {
    for (int d = 0; d < rows + seats; d++) {
        for (int i = max(1, x - d); i <= min(rows, x + d); i++) {
            int dist = d - abs(i - x);
            if (y - dist >= 1 && !visited[i][y - dist]) return {i, y - dist};
            if (y + dist <= seats && !visited[i][y + dist]) return {i, y + dist};
        }
    }
    return {-1, -1}; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> rows >> seats >> queries;
    while (queries--) {
        int x, y;
        cin >> x >> y;
        if (!visited[x][y]) {
            cout << x << " " << y << endl;
            visited[x][y] = true;
        } else {
            auto nearestSeat = findNearestUnvisitedSeat(x, y);
            cout << nearestSeat.first << " " << nearestSeat.second << endl;
            visited[nearestSeat.first][nearestSeat.second] = true;
        }
    }
    return 0;
}
