#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data; 
    struct Node* left; 
    struct Node* right;  

    Node(int val) {
        data = val; 
        left = right = nullptr;
    }
}; //

int main() { 
    // Create the root Node
    Node* root = new Node(1);
    root->left = new Node(2); 
    root->right = new Node(3);
    root->left->right = new Node(4); 

    cout << "Root: " << root->data << endl;
    cout << "Left Child: " << root->left->data << endl;
    cout << "Right Child: " << root->right->data << endl;
    cout << "Left-Right Child: " << root->left->right->data << endl;

    return 0; 
}



class Solution {
public:
    // Function to create the tree from the array
    void create_tree(Node*& root, const vector<int>& vec, int index) {
        // Base case: if index is out of bounds of the array
        if (index >= vec.size()) {
            return;
        }

        // Create a new node for the current index
        root = new Node(vec[index]);

        // Recursively create the left and right subtrees
        create_tree(root->left, vec, 2 * index + 1);  // Left child index
        create_tree(root->right, vec, 2 * index + 2); // Right child index
    }

    // Helper function to start the tree creation
    Node* buildTree(const vector<int>& vec) {
        Node* root = nullptr;
        create_tree(root, vec, 0); // Start from the root at index 0
        return root;
    }
};

// Function to print the tree (for verification)
void printTree(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Solution solution;
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7}; // Example array
    Node* root = solution.buildTree(vec);

    cout << "Tree nodes in pre-order: ";
    printTree(root); // Print the tree nodes

    return 0;
}

