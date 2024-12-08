


// Time: O(N)
// Space: O(H)

class Solution {
private: 
 vector<int> ans; 
 void postorder(TreeNode* root){
    if(root== nullptr){
        return ;
    }
    // left-> right-> root;
     postorder(root->left); 
      postorder(root->right);
      ans.push_back(root->val);
 }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root); 
        return ans;
    }
};
	
	
// Time: O(N)
// Space: O(H)
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode *prev = nullptr;
        while (root || s.size()) {
            while (root) {
                s.push(root);
                root = root->left;
            }
            root = s.top();
            if (!root->right || root->right == prev) { // if root->right is nonexistent or visited, visit root
                ans.push_back(root->val);
                s.pop();
                prev = root;
                root = nullptr;
            } else root = root->right; // otherwise, visit right subtree
        }
        return ans;
    }
};



// using 2 Stack  

 
// Time: O(N)
// Space: O(H)

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans; 
        if (root == NULL) return ans; 
        
        stack<TreeNode*> st1, st2;
        st1.push(root);
        
        // Process the nodes
        while (!st1.empty()) {
            // Pop from st1 and push onto st2
            TreeNode* node = st1.top();
            st1.pop();
            st2.push(node);
            
            // Push left and right children to st1
            if (node->left != NULL) st1.push(node->left);
            if (node->right != NULL) st1.push(node->right);
        }

        // Transfer nodes from st2 to ans
        while (!st2.empty()) {
            ans.push_back(st2.top()->val);
            st2.pop();
        }

        // The ans vector now contains the postorder traversal
        return ans;
    }
};






Postorder is : Left Right Root

Reverse Postorder is: Root Right Left

Try Finding Reverse Postorder like preorder using one stack O(N) time and O(N) space

Then reverse the resultant vector, that will be the answer O(N) time

Overall O(2N) time and O(N) space

Code Below:

class Solution {
public:
    
vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            res.push_back(temp->val);
            if(temp->left) s.push(temp->left);
            if(temp->right) s.push(temp->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};




    
    Using 1 stack

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;

        // If the root is null, return an empty list
        if (root == nullptr) {
            return result;
        }

        // To keep track of the previously processed node
        TreeNode* previousNode = nullptr;
        // Stack to manage the traversal
        stack<TreeNode*> traversalStack;

        // Process nodes until both the root is null and the stack is empty
        while (root != nullptr || !traversalStack.empty()) {
            // Traverse to the leftmost node
            if (root != nullptr) {
                traversalStack.push(root);
                root = root->left;
            } else {
                // Peek at the top node of the stack
                root = traversalStack.top();

                // If there is no right child or the right child was already
                // processed
                if (root->right == nullptr || root->right == previousNode) {
                    result.push_back(root->val);
                    traversalStack.pop();
                    previousNode = root;
                    root = nullptr;  // Ensure we don’t traverse again from this
                                     // node
                } else {
                    // Move to the right child
                    root = root->right;
                }
            }
        }

        return result;
    }
};



 Morris Traversal (No stack)