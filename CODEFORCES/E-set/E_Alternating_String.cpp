#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int ALPHABET_SIZE = 26;

// Function to calculate minimum operations needed to make the string alternating
int calculate_min_operations(const string& s, int n) {
    vector<int> even_count(ALPHABET_SIZE, 0);
    vector<int> odd_count(ALPHABET_SIZE, 0);

    // Populate frequency counts
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            even_count[s[i] - 'a']++;
        } else {
            odd_count[s[i] - 'a']++;
        }
    }

    // Find maximum frequency character at even and odd indices
    int max_even_count = *max_element(even_count.begin(), even_count.end());
    int max_odd_count = *max_element(odd_count.begin(), odd_count.end());

    // Calculate minimum operations to achieve alternating string
    int min_operations = (n / 2 - max_even_count) + (n / 2 - max_odd_count);

    return min_operations;
}

// Main function to handle multiple test cases
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n % 2 == 1) {
            // Handle odd-length strings by considering one deletion
            int result_with_deletion = calculate_min_operations(s.substr(0, n - 1), n - 1) + 1;
            cout << result_with_deletion << endl;
        } else {
            cout << calculate_min_operations(s, n) << endl;
        }
    }

    return 0;
}
