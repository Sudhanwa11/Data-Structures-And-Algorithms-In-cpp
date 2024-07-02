#include <unordered_map>
#include <list>
#include <queue>

bool iscyclicbfs(int i, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
    unordered_map<int, int> parent;

    parent[i] = -1;
    visited[i] = 1;

    queue<int> q;
    q.push(i);

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto num: adj[front]) {
            if(visited[num] == true && num != parent[front]) {
                return true;
            }
            else if (!visited[num]) {
                q.push(num);
                visited[num] = 1;
                parent[num] = front;
            }
        }
    }
    return false;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int, list<int>> adj;

    for (int i=0; i<m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, bool> visited;
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            bool ans = iscyclicbfs(i, visited, adj);
            if(ans == 1) {
                return "Yes";
            } 
        }
    }
    return "No";
}
