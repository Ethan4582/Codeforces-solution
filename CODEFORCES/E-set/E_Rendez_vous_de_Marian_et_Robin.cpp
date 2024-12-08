#include <bits/stdc++.h>
using namespace std;
#define INF LLONG_MAX

vector<vector<pair<int, int>>> graph;
set<int> horse_nodes;

vector<vector<long long>> dijkstra(int start, int n) {
    vector<vector<long long>> dist(n + 1, vector<long long>(2, INF)); // dist[node][state]
    dist[start][0] = 0; // start without riding
    priority_queue<tuple<long long, int, int>, vector<tuple<long long, int, int>>, greater<tuple<long long, int, int>>> heap;
    heap.emplace(0, start, 0); // (distance, node, horse_state)

    while (!heap.empty()) {
        auto [d, u, s] = heap.top();
        heap.pop();
        if (d > dist[u][s]) continue;

        // If at u, horse_state == 0, and u has a horse, we can mount horse at zero cost
        if (s == 0 && horse_nodes.count(u)) {
            if (dist[u][1] > d) {
                dist[u][1] = d;
                heap.emplace(d, u, 1); // Proceed to neighbors
            }
        }

        for (auto [v, w] : graph[u]) {
            if (s == 1) {
                // Riding horse, edge cost is w / 2
                long long nd = d + w / 2;
                if (nd < dist[v][1]) {
                    dist[v][1] = nd;
                    heap.emplace(nd, v, 1);
                }
            } else {
                // Not riding horse, edge cost is w
                long long nd = d + w;
                if (nd < dist[v][0]) {
                    dist[v][0] = nd;
                    heap.emplace(nd, v, 0);
                }
            }
        }
    }
    return dist;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;
        horse_nodes.clear();
        for (int i = 0; i < h; i++) {
            int horse_node;
            cin >> horse_node;
            horse_nodes.insert(horse_node);
        }

        graph.assign(n + 1, vector<pair<int, int>>());
        for (int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].emplace_back(v, w);
            graph[v].emplace_back(u, w);
        }

        auto marian_dist = dijkstra(1, n);
        auto robin_dist = dijkstra(n, n);

        long long earliest_meeting = INF;
        for (int i = 1; i <= n; i++) {
            for (int ms = 0; ms <= 1; ms++) {
                for (int rs = 0; rs <= 1; rs++) {
                    long long md = marian_dist[i][ms];
                    long long rd = robin_dist[i][rs];

                    if (md < INF && rd < INF) {
                        long long meeting_time = max(md, rd);
                        earliest_meeting = min(earliest_meeting, meeting_time);
                    }
                }
            }
        }

        if (earliest_meeting == INF) {
            cout << -1 << '\n';
        } else {
            cout << earliest_meeting << '\n'; // Output the earliest meeting time
        }
    }
    return 0;
}