if(nx>=0 && ny>=0 && nx<m && ny<n && !vis[nx][ny])
// gerneraly used  in BFS  you should NOT push invalid states into queue

----------------------IMP---------------------------------------
Problem Clue                                           / Keywords	What It Really Means	                  First Algorithm Thought
connected groups, islands, provinces, regions	          find connected components	                            DFS / BFS
can reach?, path exists?, escape possible?	                    traversal / reachability	DFS / BFS
shortest path, minimum moves, fewest steps	                    shortest path in unweighted graph	BFS
weighted shortest path, minimum cost/time/delay	                    weighted positive graph	Dijkstra
shortest path + DAG mentioned	                          dependency ordered graph	                    Topo Sort + Relaxation
negative edge weights[directed /undericted by converstion]	                    shortest path with negatives	Bellman Ford
all-pairs shortest path	                    shortest between every pair	Floyd Warshall
prerequisites, ordering, before-after relation	                    dependency graph	Topological Sort
course schedule, alien dictionary	               DAG ordering / cycle detection	Topo / DFS states
detect cycle in directed graph	                    back-edge detection	DFS states (0,1,2)
detect cycle in undirected graph	                    revisit except parent	DFS/BFS + parent
safe nodes, eventual safe states	                    nodes avoiding cycles	DFS states
connect all nodes with minimum cost	(Prim's Algorithm )                    spanning tree	MST
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


-----------------------Bellman Ford Algorithm-----------------------------------

shortest path to all other node in directed graph if the negative edges 

we can implment it for undericted just by using converting the undericted to direct graph with duplicate value  

Time Complexity: O(V*E), where V = no. of vertices and E = no. of Edges.

Space Complexity: O(V) 


- relax all the edges  n-1 times sequently 
- Why n-1 
 - Bellman-Ford repeatedly scans ALL edges to cover all the edge we need V-1 edges 
  - becuase the longest possible shortest path can contain V-1 edges


  CLass Solution {
           vector<int> Bellman_Ford(vector<vector<int>>& edges  , int V , int S){

            vector<int> dist(V ,INT_MAX); 
            dist[S] = 0;
            for(int i =0 ; i <V-1 ; i++){
                for(auto it: edges){
                    int u = it[0]; 
                    int v= it[1]; 
                    int wt= it[2];
                    if(dist[u]+ wt< dist[v] & !dist[u]=INT_MAX){
                        dist[v]=dist[u]+ wt;
                    }
                }
            }

            // Nth relaxation to check negative cycle
            for (auto it : edges) {
			int u = it[0];
			int v = it[1];
			int wt = it[2];
			if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
				return { -1};
			}
		}

   return dist;
           }
  }






  -----------------------------Floyd Warshall Algorithm ----------------------------
Time Complexity: O(V^3), 
Space Complexity: O(V^2),


  find shortes path of each node  to every pair of node 
  also help detect negative cycle 

 same code for the undericted just the matrix hold both the value for the edges 

 when we traverse the inner loop storethe value for direct path but outer loop is for via node that can conribute  to the dist 
Can going through node k give shorter path from i to j ?

dist[i][j] = min( dist[i][j], dist[i][k] + dist[k][j] )
  
  direct path vs path through k


  class Solution {
public:

    void floydWarshall(vector<vector<int>>& dist) {
        int V= dist.size(); 

           // via node
        for(int k =0 ; k<V; k++){
               // via source
            for(int i =0 ; i<V ; i++){

                // dest node 
                for(int j =0 ;j< V; j++){

                    // if k is not the itermdediate  
                    if(dist[i][k]==INT_MAX ||  dist[k][j]==INT_MAX){
                        continue;
                    }

                    dist[i][j]= min(dist[i][j], (dist[i][k] + dist[k][j]));
                }
            }
            
        }

        return dist;

    }

  }



  ---------------------MST [Minimum Spanning Tree] Prim's Algorithm  -------------------------------------

  A spanning tree is a tree in which we have N nodes(i.e. All the nodes present in the original graph) and N-1 edges and all nodes are reachable from each other.

  MST is just find the spanning tree with minimum sum 

we can start from any node to find the MST 


class Solution
{
public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
	int spanningTree(int V, vector<vector<int>> adj[])
	{
		priority_queue<pair<int, int>,
		               vector<pair<int, int> >, greater<pair<int, int>>> pq;

		vector<int> vis(V, 0);
		// {wt, node}
		pq.push({0, 0});
		int sum = 0;
		while (!pq.empty()) {
			auto it = pq.top();
			pq.pop();
			int node = it.second;
			int wt = it.first;

			if (vis[node] == 1) continue;
			// add it to the mst
			vis[node] = 1;
			sum += wt;
			for (auto it : adj[node]) {
				int adjNode = it[0];
				int edW = it[1];
				if (!vis[adjNode]) {
					pq.push({edW, adjNode});
				}
			}
		}
		return sum;
	}
};




----------------print the MST----------------------------------------

class Solution
{
public:

    // Function to find sum of weights
    // of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;

        vector<int> vis(V, 0);

        // to store mst edges
        vector<pair<int,int>> mst;

        // {wt, {node, parent}}
        pq.push({0, {0, -1}});

        int sum = 0;

        while(!pq.empty()) {

            auto it = pq.top();

            pq.pop();

            int wt = it.first;

            int node = it.second.first;

            int parent = it.second.second;

            if(vis[node] == 1) {
                continue;
            }

            // add it to mst
            vis[node] = 1;

            sum += wt;

            // store mst edge
            if(parent != -1) {
                mst.push_back({parent, node});
            }

            for(auto it : adj[node]) {

                int adjNode = it[0];

                int edW = it[1];

                if(!vis[adjNode]) {

                    pq.push({
                        edW,
                        {adjNode, node}
                    });
                }
            }
        }

        // print mst edges
        for(auto it : mst) {

            cout << it.first
                 << " - "
                 << it.second
                 << endl;
        }

        return sum;
    }
};

-------------------------------Disjoint Set [IMP] -----------------------------

In order to solve this question we can use either the DFS or BFS traversal technique like if we traverse the components of the graph we can find that node 1 and node 5 are not in the same component. This is actually the brute force approach whose time complexity is O(N+E)(N = no. of nodes, E = no. of edges). But using a Disjoint Set data structure we can solve this same problem in constant time.

The disjoint Set data structure is generally used for dynamic graphs [ mean the graph is evolving at ever momemt and Disjoint help you find it int constant time]. 


Finding the parent for a particular node (findPar())
Union (in broad terms this method basically adds an edge between two nodes)
Union by rank
Union by size


-----union by rank------------

rank array: This array is initialized with zero.

parent array: The array is initialized with the value of nodes i.e. parent[i] = i.

Firstly, the Union function requires two nodes(let’s say u and v) as arguments. Then we will find the ultimate parent (using the findPar() function that is discussed later) of u and v. Let’s consider the ultimate parent of u is pu and the ultimate parent of v is pv.

After that, we will find the rank of pu and pv.

Finally, we will connect the ultimate parent with a smaller rank to the other ultimate parent with a larger rank. But if the ranks are equal, we can connect any parent to the other parent and we will increase the rank by one for the parent node to whom we have connected the other one.


findPar() function:  [ this is used to find wheater 2 component are connected to each other or not ]
This function actually takes a single node as an argument and finds the ultimate parent for each node.



so we use findPar()  to find the wheather 2 node are connected by check the finalparent node as we are add node and increasing the height let the give node are bottom to worst case it will take log(n) to find the connected or not  so we use path compression 

so we just compress the height and directly to finalparent node becase that is we need to answer this question 

TC=> findpar and findpar - 0(4 * alpha) which is close to 0(1 or constant )



By rank : 

class DisjointSet {
    vector<int> rank, parent;
    public: 
    DisjointSet(int n){
        parent.resize(n+1); 
        rank.resize(n+1 , 0);
        // marking all the parent 1 intially

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findPar(int node){
        if(node==parnet[node]){
            return node; // only te untimate parent will be eqaul to his own parent 
        }
        return parent[node]=findPar(parent[node]); 
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return; // if they belong to the same component 
           if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;  // smaller rank attached to bigger guy 
        } 
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;  // that is where i am attahcing it too 
        }

    }

}

Follow-up question:
In the union by rank method, why do we need to connect the smaller rank to the larger rank?

if we add larger to smaller the the leaf node will take more time to get parent node thus more compute time  where as in smaller to larger less node little more time in compare the same time for the larger node 



------------> union by size--------------------------------------
Now, if we again carefully observe, after applying path compression the rank of the graphs becomes distorted. So, rather than storing the rank, we can just store the size of the components for comparing which component is greater or smaller.


 size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }

 void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }