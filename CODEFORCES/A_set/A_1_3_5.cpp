#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Amount to pay for each test case

        // Calculate the maximum number of 5-burle coins
        int fives = n / 5;

        // Calculate the remaining amount after using the maximum number of 5-burle coins
        int remaining = n - fives * 5;

        // Calculate the minimum number of 3-burle coins needed
        int threes = remaining / 3;

         int remaining = remaining - threes * 3;

         

        // Output the total number of 1-burle coins used
        cout << ones + threes << endl;
    }

    return 0;
}
