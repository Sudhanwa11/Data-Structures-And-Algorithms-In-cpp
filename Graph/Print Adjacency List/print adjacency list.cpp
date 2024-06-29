class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>> ls(V);\
        
        for (auto &edge : edges) {
            int u = edge.first;
            int v = edge.second;
            
            ls[u].push_back(v);
            ls[v].push_back(u);
        }
        
        return ls;
    }
};
