class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // Create an adjacency list to represent the graph
        unordered_map<int, vector<int>> adjacencyList;
        for (const auto& edge : edges) {
            adjacencyList[edge[0]].push_back(edge[1]);
            adjacencyList[edge[1]].push_back(edge[0]); // Since it's a bidirectional graph
        }
        
        // Use a queue for iterative BFS traversal
        queue<int> bfsQueue;
        bfsQueue.push(source);
        
        while (!bfsQueue.empty()) {
            int current = bfsQueue.front();
            bfsQueue.pop();
            
            // If we have reached the destination, return true
            if (current == destination)
                return true;
            
            // Remove the current vertex from the adjacency list to mark it as visited
            vector<int> neighbors = adjacencyList[current];
            adjacencyList.erase(current);
            
            // Explore all adjacent vertices
            for (int neighbor : neighbors) {
                // If the neighbor is still in the adjacency list, add it to the queue
                if (adjacencyList.find(neighbor) != adjacencyList.end()) {
                    bfsQueue.push(neighbor);
                }
            }
        }
        
        // If destination is not reached, return false
        return false;
    }
};
