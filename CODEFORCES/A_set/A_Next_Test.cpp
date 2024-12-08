#include <iostream>
#include <vector>

using namespace std;

int findSmallestNumberNotInList(const vector<int>& nums) {
    vector<bool> present(3001, false);

    for (int num : nums) {
        if (num <= 3000) {
            present[num] = true;
        }
    }

    for (int i = 1; i <= 3000; i++) {
        if (!present[i]) {
            return i;
        }
    }

    return 3001; 
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findSmallestNumberNotInList(nums);
    cout << result << endl;

    return 0;
}
