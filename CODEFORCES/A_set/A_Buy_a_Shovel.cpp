#include <iostream>

using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int x = 1; x <= 10; ++x) {
        int total_cost = k * x;
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
