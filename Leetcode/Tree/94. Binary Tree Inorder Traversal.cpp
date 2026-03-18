




// Time: O(N)
// Space: O(H)
class Solution {
private:
    std::vector<int> ans; 

    void inorder(TreeNode* root) {
        // Check if the current node is null
        if (root == nullptr) {
            return; // Return if the node is null
        }
        
        // Inorder traversal: left -> root -> right
        inorder(root->left); // Traverse the left subtree
        ans.push_back(root->val); // Add the root's value
        inorder(root->right); // Traverse the right subtree
    }

public:
    std::vector<int> inorderTraversal(TreeNode* root) {
        inorder(root); // Start the inorder traversal from the root
        return ans; // Return the collected values
    }
};
	
	
	// Time: O(N)
// Space: O(H)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        // left-> root-> right
        stack<TreeNode*> st;
        // we keep on moveing left until we get null once we get null we print then back track to root we get nul
        // we print  the root then do the same for the right part
        TreeNode* node = root; // vaiable to traverse
        // we keep the running until both the condition failed
        while(true){
            // we keep moving to the left 
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }else{
                // we get at the bottom
                if(st.empty()==true) break; // no node to travel  -> if the stack is empty to get of the iteration
                node= st.top(); // refernce to the top
                st.pop();
                ans.push_back(node->val); // push the root 
                node=node-> right;
            }
        } 
        
        return ans;
    }
};

// Time: O(N)
// Space: O(H)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        while (root || s.size()) {
            while (root) {
                s.push(root);
                root = root->left;
            }
            root = s.top();
            s.pop();
            ans.push_back(root->val);
            root = root->right;
        }
        return ans;
    }
};