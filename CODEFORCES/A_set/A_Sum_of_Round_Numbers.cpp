#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> round_numbers;

        int multiplier = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit > 0) {
                round_numbers.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        cout << round_numbers.size() << endl;
        for (int num : round_numbers) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
