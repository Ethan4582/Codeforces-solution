#include <bits/stdc++.h>


using namespace std;

// Definition of a Node in the linked list
class Node {
public:
    int data;    // Data stored in the node
    Node* next;  // Pointer to the next node in the linked list

    // Constructor that initializes the data and next pointer
    Node(int data) : data(data), next(nullptr) {}
};

// Function to create a linked list from a vector of integers
Node* createLinkedList(const vector<int>& arr) {
    // Create the first node of the linked list
    Node* head = new Node(arr[0]);

    // Create a pointer to the current node, initially pointing to the head
    Node* curr = head;

    // Iterate through the remaining elements in the vector
    for (int i = 1; i < arr.size(); i++) {
        // Create a new node with the current element's value
        curr->next = new Node(arr[i]);

        // Move the current pointer to the newly created node
        curr = curr->next;
    }

    // Return the head of the created linked list
    return head;
}

// Function to get the length of the linked list
int lengthOfTheLinkedList(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp) {
        // cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

// Function to search for a value in the linked list
int searchInLinkedList(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}

// Function to delete the head node of the linked list
Node* deleteHead(Node* head) {
    if (head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    // Free the memory of the deleted node
    delete temp;
    return head;
}

// Function to remove the tail element of the linked list
Node* removeTailElement(Node* head) {
    if (head == nullptr || head->next == nullptr) { // If the list is empty or has only one node
        return nullptr;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) { // Traverse to the second-to-last node
        temp = temp->next;
    }

    // Delete the last node
    delete temp->next;
    temp->next = nullptr;

    return head;
}


//! delete the k elment of the code 
Node* delete_k_element(Node* head, int k) {
    if (head == nullptr) { // If the list is empty
        return nullptr;
    }

    if (k == 0) { // If the first node needs to be deleted
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* prev = nullptr;
    Node* curr = head;
    int count = 0;

    while (curr != nullptr) {
        if (count == k - 1) {
            if (curr->next == nullptr) { // If the k-th node is the last node
                return head;
            }
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            return head;
        }
        prev = curr;
        curr = curr->next;
        count++;
    }

    // If the value of k is greater than the length of the linked list
    return head;
}



// Function to print the linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    vector<int> arr = {12, 3, 8, 7};
    Node* head = createLinkedList(arr);

    // Print the data of the first node
    cout << head->data << endl;

    // Print the entire linked list
    print(head);

    // // Get the length of the linked list
    // cout << lengthOfTheLinkedList(head) << endl;

    // // Search for a value in the linked list
    // cout << searchInLinkedList(head, 13) << endl;

    // // Delete the head node of the linked list
    // head = deleteHead(head);

    // // Print the updated linked list
    // print(head);

    // // Remove the tail element of the linked list
    // head = removeTailElement(head);

    // // Print the updated linked list
    // print(head);


    head = delete_k_element(head, 2);

    print(head);

    return 0;
}


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// Function to insert a node in the binary tree
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to search for a node in the binary tree
bool search(Node* root, int data) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == data) {
        return true;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}


// Function to delete a node from the binary tree
Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return nullptr;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        
    }

    return root;
}

// Function to perform an in-order traversal of the binary tree
void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "In-order traversal of the binary tree: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Searching for 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;

    cout << "Deleting 20\n";
    root = deleteNode(root, 20);
    cout << "In-order traversal after deletion: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Deleting 30\n";
    root = deleteNode(root, 30);
    cout << "In-order traversal after deletion: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Deleting 50\n";
    root = deleteNode(root, 50);
    cout << "In-order traversal after deletion: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // Enqueue (Insert): Adds elements to the rear of the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Dequeue (Delete): Removes the element from the front of the queue
    q.pop();

    // Peek: Returns the element at the front of the queue without removing it
    cout << "Front element is: " << q.front() << endl;

    // Empty: Checks if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Size: Returns the size of the queue (Note: No standard function for Full in STL)
    cout << "Size of the queue is: " << q.size() << endl;

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

struct QNode{
    int data ;
    QNode* next;
    QNode( int d){
        data = d;
        next= nullptr;
    }
};


struct Queue{
    QNode *front, *rear;
    Queue(){
        front = rear=NULL;
    }

    void enQueue(int x){
        QNode* temp= new QNode(x);

        if ( rear== nullptr){
            front= rear= temp;
            return;
        }

        rear->next=temp;
        rear= temp;
    }

    void deQueue(){
        if ( front==NULL){
            return;
        }
        QNode* temp= front;
        front=front->next;

        if(front==NULL){
            rear=NULL;
        }

        delete(temp);
    }
};

// int main() {
//     Queue q;
//     q.enQueue(10);
//     q.enQueue(20);
//     q.deQueue();
//     q.deQueue();
//     q.enQueue(30);
//     q.enQueue(40);
//     q.enQueue(50);
//     q.deQueue();
//     cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1) << endl;
//     cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1) << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Definition for singly-linked list node
// struct Node {
//     int data;
//     Node* next;
//     Node(int x) : data(x), next(nullptr) {}
// };

// // Function to insert a new node at the beginning of the linked list
// void insertAtFront(Node*& head, int newData) {
//     Node* newNode = new Node(newData);
//     newNode->next = head;
//     head = newNode;
// }

// // Function to insert a new node at the end of the linked list
// void insertAtEnd(Node*& head, int newData) {
//     Node* newNode = new Node(newData);
//     if (head == nullptr) {
//         head = newNode;
//         return;
//     }
//     Node* current = head;
//     while (current->next != nullptr) {
//         current = current->next;
//     }
//     current->next = newNode;
// }

// void inseratpos( Node* & head , int data , int pos){
//     Node* newnode= new Node(data);
//     if( pos==0){
//         newnode->next= head;
//         head=newnode;
//         return;
//     }

//     Node* temp = head;
//     for ( int i =0; i <pos-1 &&temp!=nullptr ;i++){
//         temp= temp->next;
//     }
//     if (temp==nullptr){
//         cout <<""<<endl;
//         delete newnode;
//         return ;
//     }

//     newnode->next= temp->next;
//     temp->next=newnode;
// }

// // Function to insert a new node at a specific position in the linked list
// void insertAtPosition(Node*& head, int val, int pos) {
//     Node* n = new Node(val);
//     if (pos == 0) {
//         n->next = head;
//         head = n;
//         return;
//     }
//     Node* temp = head;
//     for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
//         temp = temp->next;
//     }
//     if (temp == nullptr) {
//         cout << "Position out of range." << endl;
//         delete n;
//         return;
//     }
//     n->next = temp->next;
//     temp->next = n;
// }




// // Function to delete a node from the beginning of the linked list
// void deleteFromBeginning(Node*& head) {
//     if (head == nullptr) return;
//     Node* temp = head;
//     head = head->next;
//     delete temp;
// }


// // Function to delete a node from the end of the linked list
// void deleteFromEnd(Node*& head) {
//     if (head == nullptr) return;
//     if (head->next == nullptr) {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     Node* secondLast = head;
//     while (secondLast->next->next != nullptr) {
//         secondLast = secondLast->next;
//     }
//     delete secondLast->next;
//     secondLast->next = nullptr;
// }


// // Function to delete a node from the middle of the linked list
// void deleteFromMiddle(Node*& head, int key) {
//     if (head == nullptr) return;
//     if (head->data == key) {
//         deleteFromBeginning(head);
//         return;
//     }
//     Node* current = head;
//     while (current->next != nullptr && current->next->data != key) {
//         current = current->next;
//     }
//     if (current->next == nullptr) return;
//     Node* temp = current->next;
//     current->next = temp->next;
//     delete temp;
// }

// // Function to search an element in the linked list
// bool search(Node* head, int key) {
//     Node* current = head;
//     while (current != nullptr) {
//         if (current->data == key) {
//             return true;
//         }
//         current = current->next;
    }
    return false;
}
// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}



// Driver code
int main() {
    // Start with the empty list
    Node* head = nullptr;
    // Insert nodes at the beginning
    insertAtFront(head, 10);
    insertAtFront(head, 20);
    insertAtFront(head, 30);
    // Print the linked list
    cout << "Linked List after inserting at front: ";
    printList(head);
    // Insert nodes at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    // Print the linked list
    cout << "Linked List after inserting at end: ";
    printList(head);
    // Search for an element
    int key = 20;
    cout << "Search " << key << ": " << (search(head, key) ? "Found" : "Not Found") << endl;
    // Delete from the beginning
    deleteFromBeginning(head);
    cout << "After deleting from beginning: ";
    printList(head);
    // Delete from the end
    deleteFromEnd(head);
    cout << "After deleting from end: ";
    printList(head);
    // Insert nodes again for middle deletion
    insertAtFront(head, 50);
    insertAtFront(head, 40);
    insertAtFront(head, 30);
    // Delete from the middle
    deleteFromMiddle(head, 40);
    cout << "After deleting from middle: ";
    printList(head);

    return 0;
}




///! double linkedlist 

#include <iostream>
using namespace std;
// Definition for doubly-linked list node
struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
};
// Function to traverse and print the doubly linked list
void traverseList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Function to insert a new node at the beginning of the doubly linked list
void insertAtFront(Node*& head, int newData) {
    Node* newNode = new Node(newData);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}
// Function to insert a new node at the end of the doubly linked list
void insertAtEnd(Node*& head, int newData) {
    Node* newNode = new Node(newData);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

// Driver code
int main() {
    // Start with the empty list
    Node* head = nullptr;

    // Insert nodes at the beginning
    insertAtFront(head, 10);
    insertAtFront(head, 20);
    insertAtFront(head, 30);
    cout << "Linked List after inserting at front: ";
    traverseList(head);

    // Insert nodes at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "Linked List after inserting at end: ";
    traverseList(head);

    
    traverseList(head);

    return 0;
}

