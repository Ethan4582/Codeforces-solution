#include <iostream>
using namespace std;

void solver() {
    int n, k;
    cin >> n >> k;
    int a = n, b = n - 1;
    int ans = 0;

    while (k > 0) {
        k -= a;
        ans++;
        // Update a and b
        int temp = a;
        a = b;
        b = (temp != b) ? b : (b - 1);
    }

    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solver();
    }

    return 0;
}
