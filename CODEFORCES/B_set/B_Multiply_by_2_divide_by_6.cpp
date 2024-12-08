#include <iostream>
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

using namespace std;

int main() {
    fastread();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

       
        int cnt2 = 0, cnt3 = 0;
        while (n % 2 == 0) {
            n /= 2;
            cnt2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            cnt3++;
        }

      
        if (n != 1) {
            cout << "-1\n";
            continue;
        }

        
        if (cnt2 > cnt3) {
            cout << "-1\n";
            continue;
        }

       
        cout << (cnt3 - cnt2) + cnt3 << "\n";
    }

    return 0;
}
