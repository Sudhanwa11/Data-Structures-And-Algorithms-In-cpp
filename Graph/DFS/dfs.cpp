class Solution {
    private:
    void dfs(int node, vector<int> adj[], vector<int> &ls, int vis[]) {
        vis[node] = 1;
        ls.push_back(node);
        
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, ls, vis);
            }
        }
    }
    public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        
        int start = 0;
        
        vector<int> ls;
        
        dfs(start, adj, ls, vis);
        return ls;
    }
};
