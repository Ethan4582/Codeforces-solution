#include <iostream>
#include <unordered_set>

using namespace std;

int f(int x) {
    x += 1;
    while (x % 10 == 0) {
        x /= 10;
    }
    return x;
}

int main() {
    unordered_set<int> a;
    int n;
    cin >> n;
    while (a.find(n) == a.end()) {
        a.insert(n);
        n = f(n);
    }
    cout << a.size() << endl;
    return 0;
}
