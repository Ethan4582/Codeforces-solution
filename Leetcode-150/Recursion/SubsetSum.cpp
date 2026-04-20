
// gnerate a subset 
https://leetcode.com/problems/subsets/description/

Class Solution{
 public:
 void dfs(int idx , vector<int>&nums , vector<int>&path , vector<vector<int>>&ans){
   if(idx==nums.size()){
      ans.puhs_back(path);
      return;
   }
   //inlcuded 
   path.push_back(nums[idx]); 
   dfs(idx+1, nums, path , ans); 
   path.pop_back();
   // not included 
   dfs(idx+1, nums, path , ans);
 }

 vector<int> subset(vector<int>&nums){
   vector<vector<int>> ans; 
   vector<int> path; // for the curr subset 
   dfs(0 ,nums, path , ans)
 }
}

TC = O(2ⁿ · N) (copying subsets) // for longest subset
SC = O(N) (recursion stack)


//bit manuiplation 

so to repsense or compute the n size of arr we need to go from 0 , 2^n-1 as we have 2^n subsets 
we use a bit to make the index postion of a subset that how we get unique bit for a unique subet 
3 ,2 ,1 

0 , 0 , 0 -> [] empy 
0 ,0 ,1 -> [3]
0 ,1 ,0 -> [2]
0 ,1 ,1 -> [2,3]
1 ,0 ,0 -> [1]
1 ,0 ,1 -> [1,3]
1 ,1 ,0 -> [1,2]
1 ,1 ,1 -> [1,2,3]




#include<bits/stdc++.h> 
using namespace std;

class Solution{
   public: 
   void findsum(int idx , int currsum, vector<int>&nums , vector<int>&ans){
      if(idx==nums.size()){
         ans.push_back(currsum);
         return;
      }
      //break the include and not incluse idx for generating the subset sum
      findsum(idx+1, currsum+nums[idx], nums, ans);

      //not include
      findsum(idx+1, currsum, nums, ans);
   }

    vector<int>subsetSum(vector<int>&nums){
      vector<int>ans;
      findsum(0 , 0 , nums, ans); 
      return ans;
        
    }
    
};


TC = O(2ⁿ)
SC = O(N) (recursion depth)

--------------------- does their a sum==k exist or not

Class Solution{
   public: 
   bool subsetSum(int idx, int sum, vector<int>&num, int k){
      if(sum==k){
         return true;
      }
      if(idx==num.size()){
         return false;
      }
      
      bool left = subset(idx+1, sum+num[idx], num, k);
      bool right = subset(idx+1, sum, num, k);
      return left||right;
   }
}

----------------top down approach -------------------------------------


dp[i][j] → can we form sum = j using first i elements
Each cell = decision (take / not take)
👉 Rows = elements used
👉 Columns = target sum

        j →   0   1   2   3   4   5   6   7   8   9   10
i ↓
0 (no ele)   T   F   F   F   F   F   F   F   F   F   F
1 (2)        T   F   T   F   F   F   F   F   F   F   F
2 (3)        T   F   T   T   F   T   F   F   F   F   F
3 (7)        T   F   T   T   F   T   F   T   F   T   T


dp[i][j] = dp[i-1][j];
If I don’t use current element, can I still make j?”

➡️ Just copy previous answer
➡️ Because nothing changed


ou want:

Can I make sum = j ?

If you decide to take current element (say = x):

Then I already used x
Remaining sum = j - x

👉 So question becomes:

Can I make (j - x) using previous elements?

arr = [2, 3]
target = 5

At element 3, trying to make 5:

5 = 3 + ?
        ↑
Need 2

👉 So:

Check dp[previous][2]


booll subset(vector<int> &arr, int sum){
   int n= arr.size(); 
   vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false)); 

   for(int i=0; i<n; i++){
      dp[i][0] = true;
   }

   for(int i =1 ; i<=n; i++){
      for(int j =1 ;j<=sum; j++){
         
         // included
         dp[i][j]=dp[i-1][j]; 
         if(arr[i-1]<=j){
           dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]]; // mean the dp[previous row][remaining sum]
         }
      }
   }
   return dp[n][sum];

}