


// Time: O(N)
// Space: O(H)
class Solution {
private:
    // Array to store the answer
    std::vector<int> ans;

    void dfs(TreeNode* root) {
        // Check if the current node is null
        if (root == nullptr) {
            return;
        }
        // Add the node's value to the answer
        ans.push_back(root->val);
        // Traverse the left subtree
        dfs(root->left);
        // Traverse the right subtree
        dfs(root->right);
    }

public:
    vector<int> preorderTraversal(TreeNode* root) {
          dfs(root); // Start DFS from the root
        return ans; // Return the collected values
    }
};
	
	
	// Time: O(N)
// Space: O(H)
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        // It is standard DFS root-> left-> right 
        vector<int> ans; 
        // if just contain 1 element
        if(root==NULL) return ans;
        stack<TreeNode*> st; 
        // push the root in first  and iteate and add until stack is empty 
        st.push(root);
        while(!st.empty()){
            //push the root of the  curr tree
            root =st.top(); 
            st.pop();
            ans.push_back(root->val);
            //check if it has left or righ the put it in the stack 
            if(root->right){
                st.push(root->right);
            }
            // putting the left on the stop
             if(root->left){
                st.push(root->left);
            }
        }
        return ans;
    }
};