if(nx>=0 && ny>=0 && nx<m && ny<n && !vis[nx][ny])
// gerneraly used  in BFS  you should NOT push invalid states into queue


patter -2  [recursive DFS] invalid states  
void dfs(i,j){

    if(outside || invalid) return;

    for(neighbors){
        dfs(nx, ny);
    }
}


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