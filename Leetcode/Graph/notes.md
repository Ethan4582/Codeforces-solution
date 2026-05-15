if(nx>=0 && ny>=0 && nx<m && ny<n && !vis[nx][ny])
// gerneraly used  in BFS  you should NOT push invalid states into queue

----------------------IMP---------------------------------------
Problem Clue                                           / Keywords	What It Really Means	                  First Algorithm Thought
connected groups, islands, provinces, regions	          find connected components	                            DFS / BFS
can reach?, path exists?, escape possible?	                    traversal / reachability	DFS / BFS
shortest path, minimum moves, fewest steps	                    shortest path in unweighted graph	BFS
weighted shortest path, minimum cost/time/delay	                    weighted positive graph	Dijkstra
shortest path + DAG mentioned	                          dependency ordered graph	                    Topo Sort + Relaxation
negative edge weights	                    shortest path with negatives	Bellman Ford
all-pairs shortest path	                    shortest between every pair	Floyd Warshall
prerequisites, ordering, before-after relation	                    dependency graph	Topological Sort
course schedule, alien dictionary	               DAG ordering / cycle detection	Topo / DFS states
detect cycle in directed graph	                    back-edge detection	DFS states (0,1,2)
detect cycle in undirected graph	                    revisit except parent	DFS/BFS + parent
safe nodes, eventual safe states	                    nodes avoiding cycles	DFS states
connect all nodes with minimum cost	                    spanning tree	MST
minimum roads/wires/connections	                    cheapest global connection	Kruskal / Prim

----------------------IMP---------------------------------------




patter -2  [recursive DFS] invalid states  
void dfs(i,j){

    if(outside || invalid) return;

    for(neighbors){
        dfs(nx, ny);
    }
}


Graph Type	Best Algorithm
Unweighted	BFS
DAG weighted	Topo Sort + Relaxation
Positive weights	Dijkstra
Negative weights	Bellman Ford






--------------------------- Top-logical sorting -------------------------

- only on directed ascycle graph that does not have cycle  
- topology sort is used for directed cycle detection but only for indegree 


 ------------------tempelte for detection and path ------------------------------------------

class Solution {
private:
    bool dfs(int node,vector<int>& vis,stack<int>& st,vector<vector<int>>& adj){
        vis[node] = 1; // visiting
        for(auto it : adj[node]){
            // cycle
            if(vis[it] == 1)
                return true;
            // unvisited
            if(vis[it] == 0){
                if(dfs(it, vis, st, adj))
                    return true;
            }
        }
        vis[node] = 2; // completed
        // push after dfs complete
        st.push(node);
        return false;
    }

public:

    vector<int> findOrder(int V, vector<vector<int>>& crs) {
        vector<vector<int>> adj(V);
        for(auto &it : crs){
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(V, 0);
        stack<int> st;
        for(int i = 0; i < V; i++){
            if(vis[i] == 0){
                if(dfs(i, vis, st, adj)){
                    return {};
                }
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};


--------------------------Khhan Algorithm is just sorting is just bfs of topology sort -------------------


for cycle case the q is empty so the traverle enver start 

class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& crs) {
        vector<vector<int>> adj(V);
        for(auto &it : crs){
            adj[it[1]].push_back(it[0]);
        }
        // get the indegree
        vector<int>indegre(V,0);

        for(int i =0 ;i<V; i++){
            for(auto it: adj[i]){
                indegre[it]++;
            }
        }
        // put in queue
        queue<int>q; 
        for(int i =0; i<V; i++){
            if(indegre[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front(); 
            q.pop(); 
            ans.push_back(node);
            for(auto it: adj[node]){
                // decress the indegree of adj
                indegre[it]--; 
                if(indegre[it]==0){
                    q.push(it);
                }
            }
        }

 return ans;
    }
};




--------------------- just the sorting ------------------------------------------

class Solution {
private:

    void dfs(int node,
             vector<int>& vis,
             stack<int>& st,
             vector<vector<int>>& list) {

        vis[node] = 1;

        for(auto it : list[node]) {

            if(!vis[it]) {
                dfs(it, vis, st, list);
            }
        }

        // at last all the node in the list is visited
        // we put the node in stack
        st.push(node);
    }

public:

    vector<int> findOrder(int V, vector<vector<int>>& crs) {

        // convert to adjacency list
        vector<vector<int>> adjlist(V);

        for(auto it : crs) {
            adjlist[it[1]].push_back(it[0]);
        }

        vector<int> vis(V, 0);

        stack<int> st;

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {
                dfs(i, vis, st, adjlist);
            }
        }

        vector<int> ans;

        while(!st.empty()) {

            int k = st.top();
            st.pop();

            ans.push_back(k);
        }

        return ans;
    }
};





----------------------------------------------------Shortest Path in Undirected Graph with Unit Weights-------------------------------------------------

class Solution {

public:
    vector<int> shortest_path_with_unit_weight( vector<vector<int>>& adj, int K, int src) {

        vector<int> path(K, INT_MAX);
        queue<pair<int,int>> q;
        path[src] = 0;

        // starting BFS
        q.push({src, 0});
        while(!q.empty()) {
            int node = q.front().first;
            int we = q.front().second;
            q.pop();

            for(auto it : adj[node]) {

                // found shorter distance
                if(path[it] > we + 1) {

                    path[it] = we + 1;

                    q.push({it, we + 1});
                }
            }
        }

        return path;  // this hold each node shortest distance from the source 
    }
}


---------------------------------------------------Shortest Path in Directed Acyclic Graph Topological Sort---------------------------------------------------------

Time Complexity: O(N+M) {for the topological sort} + O(N+M) {for relaxation of vertices, each node and its adjacent nodes get traversed} ~ O(N+M
Space Complexity:  O(N) {for the stack storing the topological sort} + O(N) {for storing the shortest distance for each node} + O(N) {for the visited array} + O( N+2M) {for the adjacency list} ~ O(N+M) .

class Solution {
private:
    bool dfs(stack<int>& st, int node, vector<vector<pair<int,int>>>& adj, vector<int>& vis) {

        vis[node] = 1;

        for(auto it : adj[node]) {
            int n1 = it.first;

            if(vis[n1] == 1) {
                return true;
            }

            if(vis[n1] == 0) {
                if(dfs(st, n1, adj, vis)) {
                    return true;
                }
            }
        }

        vis[node] = 2;
        st.push(node);
        return false;
    }

    stack<int> toposort(vector<vector<pair<int,int>>>& adj, int V) {

        vector<int> vis(V, 0);
        stack<int> st;
        for(int i = 0; i < V; i++) {
            if(vis[i] == 0) {
                dfs(st, i, adj, vis);
            }
        }

        return st;
    }

public:

    vector<int> short_path_DAG( vector<vector<pair<int,int>>>& adj, int V, int src) {

        // topo sort
        stack<int> st = toposort(adj, V);
        vector<int> dis(V, INT_MAX);
        dis[src] = 0;
        // relaxation in topo order
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            if(dis[node] != INT_MAX) {
                for(auto it : adj[node]) {
                    int n1 = it.first;
                    int wt = it.second;
                    if(dis[node] + wt < dis[n1]) {
                        dis[n1] = dis[node] + wt;
                    }
                }
            }
        }

        for(int i = 0; i < V; i++) {
            if(dis[i] == INT_MAX) {
                dis[i] = -1;
            }
        }

        return dis;
    }
};

---------------------------------------------------------------- Shortest Path - Dijkstra's Algorithm [ undirected graph]------------------------------------------

Note: The Graph doesn’t contain any negative weight cycle

// prepare the distance node using priority_queue  and parent not to track the node arraival 
 then use the parent array to track  back the path until par[node]!=node keep backtracking the node 

Method	Time Complexity	Space Complexity
Set-based Dijkstra	O((V + E) log V)	O(V + E)


 Class Solution {

    private: 
    vector<int> DIJ(vector<vector<int>>& adj , int src){
        vector<int> dist(adj.size(), INT_MAX); 

        set<pair<int,int>> st;

        set.insert({0 , src}); 
        dist[src]=0; 

        while(!st.empty()){
             auto it = *(st.begin());
             int dis= it.first; 
             int  node= it.second;
             st.erase(it);

             for(auto it: adj[node]){
                 int adjNode = it.first;
                int wt = it.second;

                if(dis+ wt < dist[adjNode]){
                    if(dist[adjNode]!=INT_MAX){
                        st.erase({dist[adjNode], adjNode});   // what if we found better path but already avlue exit so i need to delte before i insert thevalue 
                    }
                    dist[adjNode] = dis + wt;
                    
                    st.insert({dis[adjNode], adjNode});
                }
             }
        }

    }
 }



 -------------------------------------- prority_queue----------------------------------

 Time Complexity: O(E log V), as each edge leads to at most one insertion in the priority queue, which takes log V time.

Space Complexity: O(V + E), d




class Solution {
public:
    // Function to implement Dijkstra's Algorithm
    vector<int> dijkstra(int V, vector<vector<pair<int,int>>>& adj, int src) {
        // Distance array initialized to large value
        vector<int> dist(V, 1e9);

        // Min-heap storing {distance, node}
        priority_queue<pair<int,int>, vector<pair<int,int>>, 
                       greater<pair<int,int>>> pq;

        // Distance to source is 0
        dist[src] = 0;

        // Push source into heap
        pq.push({0, src});

        // Process nodes until heap is empty
        while (!pq.empty()) {
            // Extract node with minimum distance
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Skip if this distance is outdated
            if (d > dist[node]) continue;

            // Traverse all adjacent neighbors
            for (auto it : adj[node]) {
                int next = it.first;
                int wt = it.second;

                // Relaxation check
                if (dist[node] + wt < dist[next]) {
                    // Update distance
                    dist[next] = dist[node] + wt;

                    // Push updated distance into heap
                    pq.push({dist[next], next});
                }
            }
        }
        return dist;
    }
};


------------------------cheapest flight-------------------------
Time Complexity: O(N), where the additional log(N) time is eliminated by using a simple queue rather than a priority queue, which is usually used in Dijkstra’s Algorithm. Where N = Number of flights / Number of edges.

Space Complexity: O(|E| + |V|), 

class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
         queue<pair<int, pair<int ,int>>> q; // {k ,{node , cost}}
         vector<vector<pair<int, int>>> adj(n);  // {from , to ,cost}
         for(auto &it : flights){
            auto u=it[0]; auto v= it[1]; auto wt= it[2]; 
            adj[u].push_back({v ,wt});
         }
        vector<int> cost(n, INT_MAX);
         q.push({0 ,{src ,0}}); 
         cost[src]=0;

         while(!q.empty()){
            int k1= q.front().first;
            int node=q.front().second.first;
            int currcost=q.front().second.second;
   q.pop(); 
            if(k1>k){
                continue;
            }
         
            for(auto & it : adj[node]){
                int n1= it.first; 
                int wt= it.second; 

                if(cost[n1]> currcost+wt  ){
                    cost[n1]= currcost+wt; 
                    q.push({k1+1 , { n1 , cost[n1]}});
                }
            }
         }
         if(cost[dst]==INT_MAX){
            return -1;
         }
         return cost[dst];
    }
};