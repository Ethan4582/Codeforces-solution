#include <iostream>
#include <cmath>

using namespace std;

int minMoves(int a, int b) {
    int diff = abs(a - b);
    int moves = diff / 10;
    if (diff % 10 != 0) {
        moves++;
    }
    return moves;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << minMoves(a, b) << endl;
    }
    return 0;
}
