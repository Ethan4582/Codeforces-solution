#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[46]; // Precomputed Fibonacci numbers

    arr[0] = 0;
    arr[1] = 1;

    
    for (int i = 2; i < 46; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    int n;
    while (cin >> n) {
        int found = 0;

        
        for (int i = 0; 2 * arr[i] <= n; i++) {
            int x = arr[i];
            
            if (binary_search(arr, arr + 46, n - x)) {
                found = 1;
                cout << "0 " << x << " " << n - x;
                break;
            }
        }

        if (!found)
            cout << "I'm too stupid to solve this problem";

        cout << endl;
    }

    return 0;
}

