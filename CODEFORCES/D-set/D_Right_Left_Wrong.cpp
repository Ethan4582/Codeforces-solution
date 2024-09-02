// #include <bits/stdc++.h>
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<ll>
// #define pi pair<int,int> 
// #define vs vector<string>
// #define vpii vector<pair<int, int>>
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define rep(i, a, n) for (int i = a; i < n; ++i)
// #define p(a) cout << a << "\n";
// #define YES cout << "YES\n";
// #define NO cout << "NO\n";

// #define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));

// const ll mod = 1e9 + 7;
// const int N = 1e5 + 5; 

// using namespace std;

// int main() {
//     fastread();
//     int t; 
//     cin >> t; 
//     while (t--) {
//     int n ; 
//          cin>>n; 
//          vll a(n);
//          rep( i ,0 ,n){cin>>a[i];}

//         string str; 
//         cin >> str;
//         int l = 0, r = n - 1;
//         vll pref(n);
//         ll res = 0;
//         for (int i = 0; i < n; ++i)
//             pref[i] = (i ? pref[i - 1] : 0) + a[i];

//         while (l < r) {
//             while (l < r && str[l] == 'R')
//                    ++l;
//             while (l < r && str[r] == 'L')
//                    --r;
//             if (l < r)
//                 res += pref[r] - (l ? pref[l - 1] : 0);
//             ++l; --r;
//         }
//         p(res);
//     }
    
//     return 0;
// }



#include <iostream>

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() : head(nullptr) {}

    void create(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void insert(int data, int position) {
        Node* newNode = new Node(data);
        if (position == 0) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* current = head;
        for (int i = 0; i < position - 1 && current; i++) {
            current = current->next;
        }
        if (!current) {
            std::cout << "Position out of bounds\n";
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void deleteNode(int key) {
        Node* current = head;
        Node* prev = nullptr;
        if (current && current->data == key) {
            head = current->next;
            delete current;
            return;
        }
        while (current && current->data != key) {
            prev = current;
            current = current->next;
        }
        if (!current) {
            std::cout << "Key not found\n";
            return;
        }
        prev->next = current->next;
        delete current;
    }

    void traverse() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "None\n";
    }
};

// Time Complexity: O(n) for create, insert, delete; O(n) for traverse
// Space Complexity: O(1) for all operations (excluding the space for nodes)





#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin >> n;
        vector<int>vec(n);
        for (int  i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        string str;
        cin >> str;
        long long int ans=0;
        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=vec[i];
        }
        int left=0;int right=n-1;
        while (left<right)
        {
            if(str[left] == 'L' and str[right] == 'R'){
                ans+=sum;
                sum-=vec[left++];
                sum-=vec[right--];
                // cout <<"1 " << sum << endl;
            }
            else if(str[left]=='R'){
                sum-=vec[left++];
                // cout <<"2 " << sum << endl;
            }
            else if(str[right]=='L'){
                sum-=vec[right--];
                // cout <<"3 " << sum << endl;
            }
            
        }
        cout << ans << " " << endl;
                
        
    }
    
    return 0;
}




#include <iostream>

class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;
    DNode(int val) : data(val), next(nullptr), prev(nullptr) {}
};
class DoublyLinkedList {
public:
    DNode* head;
    DoublyLinkedList() : head(nullptr) {}
    void create(int data) {
        DNode* newNode = new DNode(data);
        if (!head) {
            head = newNode;
        } else {
            DNode* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }
    void insert(int data, int position) {
        DNode* newNode = new DNode(data);
        if (position == 0) {
            newNode->next = head;
            if (head) {
                head->prev = newNode;
            }
            head = newNode;
            return;
        }
        DNode* current = head;
        for (int i = 0; i < position - 1 && current; i++) {
            current = current->next;
        }
        if (!current) {
            std::cout << "Position out of bounds\n";
            return;
        }
        newNode->next = current->next;
        newNode->prev = current;
        if (current->next) {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }
    void traverse() {
        DNode* current = head;
        while (current) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "None\n";
    }
};

// Time Complexity: O(n) for create, insert, delete; O(n) for traverse
// Space Complexity: O(1) for all operations (excluding the space for nodes)






#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;
    BST() : root(nullptr) {}
    void insert(int key) {
        root = insertRec(root, key);
    }
    Node* insertRec(Node* node, int key) {
        if (!node) return new Node(key);
        if (key < node->data) {
            node->left = insertRec(node->left, key);
        } else {
            node->right = insertRec(node->right, key);
        }
        return node;
    }

     void inorder() {
        inorderRec(root);
        cout << endl;
    }

    void inorderRec(Node* node) {
        if (node) {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }
};

// Time Complexity for BST operations:
// Insert: O(h) where h is the height of the tree (O(log n) for balanced, O(n) for skewed)
// Delete: O(h)
// Search: O(h)
// Space Complexity: O(1) (excluding the space for nodes)


