

class Solution {
  public:
    int countNodes(int i) {
        if (i < 1) {
            return 0; // Return 0 for invalid levels
        }
        return pow(2, i - 1); // Maximum nodes at level i is 2^(i-1)
    }
};