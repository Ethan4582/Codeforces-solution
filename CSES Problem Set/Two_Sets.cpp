#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Calculate the sum of the first n natural numbers
    long long total_sum = (long long)n * (n + 1) / 2;

    // If the total sum is odd, it's not possible to divide into two equal sets
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        long long tsun = total_sum / 2;

        vector<int> set1, set2;
        long long cursum = 0;

        // Start from the largest number and add to set1 until we reach the target sum
        for (int i = n; i >= 1; --i) {
            if (cursum + i <= tsun) {
                set1.push_back(i);
                cursum += i;
            } else {
                set2.push_back(i);
            }
        }

        
        cout << set1.size() << endl;
        for (int x : set1) {
            cout << x << " ";
        }
        cout << endl;

        
        cout << set2.size() << endl;
        for (int x : set2) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
