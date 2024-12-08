#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    vector<pair<int, int>> tree;
    int size;

    void initialize(int n) {
        size = 1;
        while (size < n) {
            size <<= 1;
        }
        tree.assign(2 * size - 1, {0, 0});
    }

    void buildTree(const vector<int>& arr, int node, int left, int right) {
        if (right - left == 1) {
            if (left < arr.size()) {
                tree[node] = {arr[left], rand()};
            }
            return;
        }
        int mid = (left + right) / 2;
        buildTree(arr, 2 * node + 1, left, mid);
        buildTree(arr, 2 * node + 2, mid, right);
        tree[node].first = tree[2 * node + 1].first + tree[2 * node + 2].first;
        tree[node].second = tree[2 * node + 1].second & tree[2 * node + 2].second;
    }

    void update(int index, int value, int node, int left, int right) {
        if (left + 1 == right) {
            tree[node] = {value, rand()};
            return;
        }
        int mid = (left + right) / 2;
        if (index < mid) {
            update(index, value, 2 * node + 1, left, mid);
        } else {
            update(index, value, 2 * node + 2, mid, right);
        }
        tree[node].first = tree[2 * node + 1].first + tree[2 * node + 2].first;
        tree[node].second = tree[2 * node + 1].second & tree[2 * node + 2].second;
    }

    int querySum(int l, int r, int node, int left, int right) {
        if (l >= right || r <= left) {
            return 0;
        }
        if (left >= l && right <= r) {
            return tree[node].first;
        }
        int mid = (left + right) / 2;
        return querySum(l, r, 2 * node + 1, left, mid) + querySum(l, r, 2 * node + 2, mid, right);
    }

    int queryAnd(int l, int r, int node, int left, int right) {
        if (l >= right || r <= left) {
            return 0;
        }
        if (left >= l && right <= r) {
            return tree[node].second;
        }
        int mid = (left + right) / 2;
        return queryAnd(l, r, 2 * node + 1, left, mid) & queryAnd(l, r, 2 * node + 2, mid, right);
    }

public:
    void build(const vector<int>& arr) {
        initialize(arr.size());
        buildTree(arr, 0, 0, size);
    }

    void update(int index, int value) {
        update(index, value, 0, 0, size);
    }

    int sumQuery(int l, int r) {
        return querySum(l, r, 0, 0, size);
    }

    int andQuery(int l, int r) {
        return queryAnd(l, r, 0, 0, size);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        SegmentTree segTree;
        segTree.build(arr);

        while (m--) {
            int l, r;
            cin >> l >> r;
            int sum = segTree.sumQuery(l, r + 1);
            if (sum % 2 != 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}