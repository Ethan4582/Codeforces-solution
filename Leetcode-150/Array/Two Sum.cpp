
--- brute force ---

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Loop through each element
        for (int i = 0; i < nums.size(); i++) {
            // Loop through the elements after the current element
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the sum of the two elements equals the target
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return the indices of the two numbers
                }
            }
        }
        // If no solution is found, return an empty vector
        return {};
    }
};

--- optimized ---

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tr) {
        int n= nums.size(); 
        unordered_map<int , int> st;
        for(int i =0 ; i<n; i++){
            st[nums[i]]=i;
        }
        for(int i =0 ; i<n; i++){
            int diff= tr-nums[i];
            // to check the duplicate value  st[diff]!=i  index 
            if(st.count(diff) && st[diff]!=i){
                return {i, st[diff]};
            }else{
                st.insert({nums[i], i})
            }
        }
        return {};
    }
};

------------------------------- optimal -------------------------------

// Time Complexity: O(N)
// Space Complexity: O(1)


look in the table and check if the complement is present or not 


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }
};
