void dfs(int node, vector<bool> &visited, stack<int> &st, vector<int> adj[]) {
    visited[node] = true;  // Mark the current node as visited
    for (int nbr : adj[node]) {
        if (!visited[nbr]) {
            // Visit the unvisited neighbors
            dfs(nbr, visited, st, adj);
        }
    }
    st.push(node);  // Push the current node to the stack after visiting its neighbors
}

string getAlienLanguage(vector<string> &dictionary, int k) {
    // Construct adjacency list
    vector<int> adj[26];  // Each letter is a node (letters 'a' to 'z')

    // Build the adjacency list based on the dictionary
    for (int i = 0; i < dictionary.size() - 1; i++) {
        string s1 = dictionary[i];
        string s2 = dictionary[i + 1];
        int len = min(s1.size(), s2.size());
        for (int ptr = 0; ptr < len; ptr++) {
            if (s1[ptr] != s2[ptr]) {
                // If characters differ, add an edge in the adjacency list
                adj[s1[ptr] - 'a'].push_back(s2[ptr] - 'a');
                break;
            }
        }
    }

    // Perform topological sort using DFS
    stack<int> st;  // Stack to hold the order of characters
    vector<bool> visited(26, false);  // Keep track of visited nodes (letters 'a' to 'z')

    // Traverse all letters 'a' to 'z' and perform DFS
    for (int i = 0; i < 26; i++) {
        if (!visited[i]) {
            // If the current letter is not visited, start DFS from here
            dfs(i, visited, st, adj);
        }
    }

    // Extract characters from the stack to form the result
    string ans = "";
    while (!st.empty()) {
        ans += char(st.top() + 'a');  // Convert the stack top (node) to character
        st.pop();  // Pop the stack to access the next character
    }

    return ans;  // Return the order of characters in the alien language
}
