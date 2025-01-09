// #include <bits/stdc++.h> 
// using namespace std; 

// // //This is how to store the graph using matirx 
// // int main(){
// //    int n , m; 
// //    cin>>n>>m; 
// //    int adj[n+1][m+1] ; 
// //    while(m--){
// //       int u , v; cin>>u>>v; 
// //       adj[u][v]=1;
// //             adj[v][u]=1;

// //    }
// // }

// //!Adjecented list Reprsentation of the graph 

// int main(){
//    int n , m; 
//    cin>>n>>m ; 
//    vector<int> adj[n+1]; // 0 based indexing ajecent list conatining array at each node
//    while(m--){
//       int u , v; cin>>u>>v; 
//       adj[u].push_back(v);
//       adj[v].push_back(u);
//    }
// }

// class Solution {
//   public:
//     // Function to return the adjacency list for each vertex.
//     vector<vector<int>> printGraph(int V, vector<pair<int, int>>& ed) {
//         vector<vector<int>> adj(V + 1); 

//         for (const auto edge : ed) {
//             int u = edge.first;
//             int v = edge.second;
//             adj[u].push_back(v);
//             // adj[v].push_back(u); // earse this for directed graph 
//         }

//         return adj;
//     }
// };


//! --------------------BFS graph traversal ------------------------------

// -->all the node at eqidistance from the current node are are on the same leverl 

// -->intail configuration for BFS and we us queue for traversal and will contain teh first node or the root node and visted graph ofn+1 starting fron 0... and intial mark the root node 



// class Solution {
//   public:
//     vector<int> bfsOfGraph(vector<vector<int>> &adj) {
//         int n = adj.size(); // number of nodes
//         int vis[n] = {0}; // visited array
//         vis[0] = 1; // mark the first or root node 
//         queue<int> q; 
//         q.push(0); // added the first adjacent list of 0 node 
//         vector<int> bfs; // answer store for BFS traversal 
        
//         while (!q.empty()) {
//             int node = q.front();
//             q.pop(); // get the current node for traversal, mark it visited, and add all the neighbours in the queue 
//             bfs.push_back(node); // use push_back to add the node to bfs
            
//             // now we check the neighbour nodes 
//             for (auto it : adj[node]) { // visit all the node neighbours stored in the adj list 
//                 if (!vis[it]) { // if not visited, mark it 
//                     vis[it] = 1;
//                     q.push(it);
//                 }
//             }
//         }
//         return bfs;  
//     }
// };


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   public:
//     // Function to return Breadth First Traversal of given graph.
//     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         int vis[V] = {0}; 
//         vis[0] = 1; 
//         queue<int> q;
//         // push the initial starting node 
//         q.push(0); 
//         vector<int> bfs; 
//         // iterate till the queue is empty 
//         while(!q.empty()) {
//            // get the topmost element in the queue 
//             int node = q.front(); 
//             q.pop(); 
//             bfs.push_back(node); 
//             // traverse for all its neighbours 
//             for(auto it : adj[node]) {
//                 // if the neighbour has previously not been visited, 
//                 // store in Q and mark as visited 
//                 if(!vis[it]) {
//                     vis[it] = 1; 
//                     q.push(it); 
//                 }
//             }
//         }
//         return bfs; 
//     }
// };

// void addEdge(vector <int> adj[], int u, int v) {
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void printAns(vector <int> &ans) {
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
// }

// int main() 
// {
//     vector <int> adj[6];
    
//     addEdge(adj, 0, 1);
//     addEdge(adj, 1, 2);
//     addEdge(adj, 1, 3);
//     addEdge(adj, 0, 4);

//     Solution obj;
//     vector <int> ans = obj.bfsOfGraph(5, adj);
//     printAns(ans);

//     return 0;
// }



//! -------------------------------BFS --------------------------------------

// - Explore all nodes in a graph using depth-first search (DFS).
// - Start from an initial root node.
// - Call `dfs(node)` for the current node.
// - Mark the current node as visited.
// - For each neighbor in the adjacency list:
//   - If the neighbor is not visited:
//     - Mark it as visited.
//     - Recursively call `dfs` for that neighbor.
// - If there are no unvisited neighbors, backtrack to the previous node.
// - Continue until all reachable nodes are visited.


// class Solution {
//  void dfs(int node , vector<vector<int>>& adj, vector<int> vis  , vector<int>&dfsans){
     
//      vis[node]=1;// mark that current node as visted 
//       dfsans.push_back(node);
//      // trvers for all the neighboue 
//      for(auto it : adj[node]){
//          if(!vis[it]){
//              dfs(it , adj, vis, dfsans); // if not visted we explore it 
//          }
//      }
//  }
 
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(vector<vector<int>>& adj) {
//         int n = adj.size();// n  is number if node in the graph 
//         vector<int> vis(n, 0); 
//         int start=0; 
//         vector<int> dfsans;
//         // first dfs call to strt 
//         dfs(start, adj, vis, dfsans); 
//         return dfsans;
//     }
// };

// Sc- 0(3N) -> store, visted, revsstact for work skew it can be 0(n)

// Tc- 0(N)-> for recurssive call +  submissio ofall the degree fo all the d node 0(degre fo node )-> 0(2*E)

// Tc-0(N)+ 0(2*E)-> undirected 
// Tc-0(N)+ 0(E)-> directed 


// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
//   private: 
//     void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
//         vis[node] = 1; 
//         ls.push_back(node); 
//         // traverse all its neighbours
//         for(auto it : adj[node]) {
//             // if the neighbour is not visited
//             if(!vis[it]) {
//                 dfs(it, adj, vis, ls); 
//             }
//         }
//     }
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//         int vis[V] = {0}; 
//         int start = 0;
//         // create a list to store dfs
//         vector<int> ls; 
//         // call dfs for starting node
//         dfs(start, adj, vis, ls); 
//         return ls; 
//     }
// };

// void addEdge(vector <int> adj[], int u, int v) {
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void printAns(vector <int> &ans) {
//     for (int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }
// }

// int main() 
// {
//     vector <int> adj[5];
    
//     addEdge(adj, 0, 2);
//     addEdge(adj, 2, 4);
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 3);

//     Solution obj;
//     vector <int> ans = obj.dfsOfGraph(5, adj);
//     printAns(ans);

//     return 0;
// }


