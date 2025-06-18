#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(int n, vector<vector<int>>& edges, int q, vector<vector<int>>& queries) {
    vector<vector<pair<int, int>>> tree(n + 1);
    vector<int> parent(n + 1, 0);
    vector<int> monster(n + 1, 0);
    
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1], p = edge[2];
        tree[u].push_back({v, p});
        tree[v].push_back({u, p});
    }
    
    // DFS to build parent array
    function<void(int, int)> dfs = [&](int node, int prev) {
        parent[node] = prev;
        for (auto& [next, power] : tree[node]) {
            if (next != prev) {
                monster[next] = power;
                dfs(next, node);
            }
        }
    };
    
    dfs(1, 0);
    
    vector<int> results;
    for (auto& query : queries) {
        int u = query[0], h = query[1];
        int current = u;
        
        while (current != 1) {
            int p = monster[current];
            
            if (h < p) {
                break;
            } else if (h > p) {
                h -= p;
                current = parent[current];
            } else {
                current = parent[current];
                break;
            }
        }
        
        results.push_back(current);
    }
    
    return results;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> edges(n - 1, vector<int>(3));
    for (int i = 0; i < n - 1; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }
    
    int q;
    cin >> q;
    
    vector<vector<int>> queries(q, vector<int>(2));
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }
    
    vector<int> results = solve(n, edges, q, queries);
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}