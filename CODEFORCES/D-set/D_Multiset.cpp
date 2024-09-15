// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int n, q;
//     cin >> n >> q;

//     multiset<int> s;
//     for (int i = 0; i < n; ++i) {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     while (q--) {
//         int t;
//         cin >> t;

//         if (t > 0) {  
//             s.insert(t);
//         } else {  
//             int k = -t;  
//             auto it = s.begin();
//             advance(it, k - 1);  
//             s.erase(it);
//         }
//     }

//     if (s.empty()) {
//         cout << 0 << "\n";
//     } else {
//         cout << *s.begin() << "\n";  
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000005;  
int fenwick[MAXN];


void update(int index, int delta, int n) {
    while (index <= n) {
        fenwick[index] += delta;
        index += index & -index;
    }
}


int query(int index) {
    int sum = 0;
    while (index > 0) {
        sum += fenwick[index];
        index -= index & -index;
    }
    return sum;
}

int findKth(int k, int n) {
    int lo = 1, hi = n, ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (query(mid) >= k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;
    
    vector<int> arr(n), queries(q);
    vector<pair<int, int>> ops;
    

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        ops.push_back({1, arr[i]});  
    }
    
   
    for (int i = 0; i < q; ++i) {
        int k;
        cin >> k;
        ops.push_back({(k > 0 ? 1 : -1), abs(k)});
    }
    
   
    vector<int> al_val;
    for (auto op : ops) {
        al_val.push_back(op.second);
    }
    
    sort(al_val.begin(), al_val.end());
    al_val.erase(unique(al_val.begin(), al_val.end()), al_val.end());
    
  
    unordered_map<int, int> compress;
    for (int i = 0; i < (int)al_val.size(); ++i) {
        compress[al_val[i]] = i + 1;  
    }
    
    int max_comp = al_val.size();  
    
    
    for (auto op : ops) {
        if (op.first == 1) {  
            int x = compress[op.second];
            update(x, 1, max_comp);
        } else {  
            int k = op.second;
            int kth_value_compressed = findKth(k, max_comp);
            if (kth_value_compressed != -1) {
                update(kth_value_compressed, -1, max_comp);  
            }
        }
    }
    
   
    for (int i = 1; i <= max_comp; ++i) {
        if (query(i) > 0) {
            cout << al_val[i - 1] << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
    
    return 0;
}
