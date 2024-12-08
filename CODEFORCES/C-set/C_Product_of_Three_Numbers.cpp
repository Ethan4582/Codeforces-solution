#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;

        int a = 1, b = 1, c = 1;

       
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                n = n / a;
                break;
            }
        }

        for (int i = a + 1; i * i <= n; i++) {
            if (n % i == 0) {
                b = i;
                c = n / i;
               
                break;
            }
        }

    
        if (b < c) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
