class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // store list of adjucent nodes
        vector<vector<int>> adj(n);

        // Build the graph from edges to nodes
        for (auto& edge : edges) {
            // for each edge nodes [0,1] push to the corresponding node in adj
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        // visited flag for each node
        vector<bool> visited(n, false);
        
        // check if nodes are connected using DFS
        return dfs(source, destination, adj, visited);
    }

private:
    bool dfs(int current, int destination, vector<vector<int>>& adj, vector<bool>& visited) {
        // if checking the same node we are connected
        if (current == destination) return true;

        // set the node as connected
        visited[current] = true;

        // look for neighbor 
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                if (dfs(neighbor, destination, adj, visited)) return true;
            }
        }

        return false;
    }
};