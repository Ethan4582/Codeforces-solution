

// tc -> O(n)
// sc -> O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;  
        
        // Count occurrences of each number
        for (auto it : nums) {
            mpp[it]++;
        }

        // Check if any number has a count of 2 or more
        for (const auto& pair : mpp) {
            if (pair.second >= 2) {
                return true; // Duplicate found
            }
        }
        
        return false; // No duplicates found
    }
};

 time complexity of O(n) and a space complexity of O(n).

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (auto it : nums) {
            if (seen.count(it)) {
                return true; // Duplicate found
            }
            seen.insert(it);
        }
        
        return false; // No duplicates found
    }
};



// Time: O(NlogN)
// Space: O(1)
class Solution {
public:
    bool containsDuplicate(vector<int>& A) {
        sort(begin(A), end(A));
        for (int i = 1; i < A.size(); ++i) {
            if (A[i] == A[i - 1]) return true;
        }
        return false;
    }
};