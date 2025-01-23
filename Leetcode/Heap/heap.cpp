

//now for 1 based indexing we have l = 2*i and r= 2*i+1, i = n/2;

// now for o based idx we have l = 2*i+1 , r= 2*i+2 , i =(n-1 )/2


#include <bits/stdc++.h> 
using namespace std; 

class heap {
public: 
    int arr[1000]; 
    int sz; 

    heap() {
        arr[0] = -1;
        sz = 0;
    }

    //! heapify algorithm 
    void heapify(int arr[], int n, int i) { 
      // so if give the index it will covert all node below into heap 
      // already heapfiy part is from (n/2)+1; 
      // i will  process all the node from n/2 ... 0 all the node 
      int largest =i; // the curr idx should be the max val in that tree in maxheap 
       
        int l = 2 * i; 
        int r = 2 * i + 1;

        if (l <= n && arr[largest] < arr[l]) {
            largest = l;
        }
        if (r <= n && arr[largest] < arr[r]) {
            largest = r;
        }
// suppose if the largest go uppdate the mean i  need to swapnow 
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    void heapsort(int arr[], int n) {
        int size = n; // Store the original size
        for (int i = size / 2; i >= 1; i--) {
            heapify(arr, size, i);
        }
        
        for (int i = size; i >= 1; i--) {
            swap(arr[1], arr[i]);
            size--; 
            heapify(arr, size, 1);
        }
    }

    // Tc - O(log(n))
    void insert(int val) {
        sz++; 
        arr[sz] = val;
        // where to insert the val
       // find the parent for the idx to be inserted 
        int idx = sz;

        while (idx > 1) {
            int pridx = idx / 2;

            if (arr[pridx] < arr[idx]) {
                swap(arr[pridx], arr[idx]);
                idx = pridx;
            } else {
                return;
            }
        }
    }

    //! deletion   Tc - O(log(n))
    void deleteFromHeap() {
        if (sz == 0) {
            cout << "nothing to delete"; 
            return;
        }
        // Replace the root node with the last node
        arr[1] = arr[sz];
        sz--; 

        int i = 1;
        while (i <= sz) {
            int le = 2 * i;
            int rg = 2 * i + 1;
            if (le <= sz && arr[i] < arr[le]) {
                swap(arr[i], arr[le]);
                i = le; 
            } else if (rg <= sz && arr[i] < arr[rg]) {
                swap(arr[i], arr[rg]);
                i = rg; 
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= sz; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() { 
    heap h;
    int arr[6] = { -2, 3, 5, 9, 6 }; 
    int n = 5; // Size of the array

    for (int i = n / 2; i >= 1; i--) {
        h.heapify(arr, n, i);
    }

    cout << "The heapify result:" << endl; 
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr1[6] = { -2, 3, 5, 9, 6 }; 
    h.heapsort(arr1, n);

    cout << "Sorted array:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "This is the priority queue:" << endl; 
    priority_queue<int> maxHeap; // This how we assign max heap
    priority_queue<int, vector<int>, greater<int>> minHeap; // This is a min heap

    return 0;
}
