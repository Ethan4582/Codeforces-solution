#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int min_diff = abs(heights[0] - heights[1]);
    int soldier1 = 1, soldier2 = 2;

    for (int i = 1; i < n; ++i) {
        int diff = abs(heights[i] - heights[(i + 1) % n]);
        if (diff < min_diff) {
            min_diff = diff;
            soldier1 = i + 1;
            soldier2 = (i + 1) % n + 1;
        }
    }

    cout << soldier1 << " " << soldier2 << endl;

    return 0;
}
