#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    int removeIndex = -1;
    for (int i = 1; i < n; ++i) {
        if (p[i] >= p[i - 1]) {
            removeIndex = i;
            break;
        }
    }

    if (removeIndex == -1) {
        // If no element violates the strictly increasing property,
        // remove the last element to maximize the number of records
        cout << n << endl;
    } else {
        // Otherwise, remove the element immediately following the first violation
        cout << p[removeIndex] << endl;
    }

    return 0;
}
