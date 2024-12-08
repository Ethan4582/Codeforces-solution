#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long result = (n % 2 == 0) ? n / 2 : -(n + 1) / 2;

    cout << result << endl;

    return 0;
}
