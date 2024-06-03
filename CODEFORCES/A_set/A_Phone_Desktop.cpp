#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int screens = 0;
        screens += x;
        screens += (y + 1) / 2; // Ceiling division to handle remaining icons
        cout << screens << endl;
    }
    return 0;
}