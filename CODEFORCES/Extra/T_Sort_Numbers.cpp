#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input values
    int A, B, C;
    cin >> A >> B >> C;

    // Store the values in a vector
    vector<int> values = {A, B, C};

    // Sort the values in ascending order
    sort(values.begin(), values.end());

    // Output the sorted values followed by a blank line
    for (int val : values) {
        cout << val << endl;
    }
    cout << endl;

    // Output the original values in the sequence they were read
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}





