class Solution {
public:
    
    int whatParent(vector<int>& parent, int node) {
        if(parent[node] != node) {
            parent[node] = whatParent(parent,parent[node]);
        }
        return parent[node];
    }

    bool willNotCauseCycle(vector<int> &parent, int u, int v) {
        int pu = whatParent(parent, u);
        int pv = whatParent(parent, v);

        if(pu == pv) return false;

        parent[pv] = pu;
        
        return true;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
       vector<int> parent(n+1);
       for (int i = 1; i <= n; ++i) parent[i] = i;

       for(const auto& element: edges) {
            if(!willNotCauseCycle(parent, element[0], element[1])) {
                return element;
            }
       }

       return {};
    }
};
