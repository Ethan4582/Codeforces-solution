#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int a = sqrt((a1 * a3) / a2);
    int b = sqrt((a1 * a2) / a3);
    int c = sqrt((a2 * a3) / a1);

   
    int sum = 4 * (a + b + c);

    cout << sum << endl;

    return 0;
}
