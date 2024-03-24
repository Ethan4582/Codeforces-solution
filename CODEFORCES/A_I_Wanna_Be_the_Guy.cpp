#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> levelsPassed(n + 1, 0); // Initialize all levels as not passed

    // Input for Little X
    int p, level;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> level;
        levelsPassed[level] = 1; // Mark level as passed by Little X
    }

    // Input for Little Y
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> level;
        levelsPassed[level] = 1; // Mark level as passed by Little Y
    }

    // Check if all levels are passed
    bool allLevelsPassed = true;
    for (int i = 1; i <= n; ++i) {
        if (!levelsPassed[i]) {
            allLevelsPassed = false;
            break;
        }
    }

    // Output result
    if (allLevelsPassed) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
