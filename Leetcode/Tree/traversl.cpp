
//  All Traversal At once 

https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1


// Time: O(3N)
// Space: O(4H)


class Solution {
public:
    vector<vector<int>> threeOrders(Node* node) {
        stack<pair<Node*, int>> st; 
        vector<int> pre, inor, post; 
        if (node == NULL) return {pre, inor, post}; // Return empty vectors if node is NULL
        st.push({node, 1}); 
        while (!st.empty()) {
            auto it = st.top(); 
            st.pop();
            if (it.second == 1) {
                pre.push_back(it.first->data); // Pre-order
                it.second++; 
                st.push(it); 
                if (it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            } else if (it.second == 2) {
                inor.push_back(it.first->data); // In-order
                it.second++; 
                st.push(it); 
                if (it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            } else {
                post.push_back(it.first->data); // Post-order
            }
        }
        return {pre, inor, post}; // Return all three traversals
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)



How to use at once 


class Solution {
public:
    vector<int> postOrder(Node* node) {
        stack<pair<Node*, int>> st; 
        vector<int> post; 
        if (node == NULL) return post; // Return empty if node is NULL
        st.push({node, 1}); 
        while (!st.empty()) {
            auto it = st.top(); 
            st.pop();
            if (it.second == 1) {
                it.second++; 
                st.push(it); 
                if (it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            } else if (it.second == 2) {
                it.second++; 
                st.push(it); 
                if (it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            } else {
                post.push_back(it.first->data); // Use 'data' instead of 'val'
            }
        }
        return post; // Return the post-order traversal
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* node) {
        stack<pair<TreeNode*, int>> st; 
        vector<int> pre; 
        if (node == NULL) return pre; // Return empty if node is NULL
        
        st.push({node, 1}); 
        
        while (!st.empty()) {
            auto it = st.top(); 
            st.pop();
            
            if (it.second == 1) {
                pre.push_back(it.first->val); // Pre-order: process the node first
                it.second++; 
                st.push(it); 
                
                if (it.first->right != NULL) {
                    st.push({it.first->right, 1}); // Push right child
                }
                
                if (it.first->left != NULL) {
                    st.push({it.first->left, 1}); // Push left child
                }
            }
        }
        
        return pre; // Return the pre-order traversal
    }
};


