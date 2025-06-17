class Solution {
public:
    struct Compare {
        bool operator()(const vector<int>& a, const vector<int>& b) const {
            return a[2] > b[2];  // Min-heap based on distance
        }
    };

    priority_queue<vector<int>, vector<vector<int>>, Compare> pq;

    int calcDistance(const vector<int>& p1, const vector<int>& p2) {
        return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
    }

    int findParent(vector<int>& parent, int node) {
        if (parent[node] != node)
            parent[node] = findParent(parent, parent[node]); // Path compression
        return parent[node];
    }

    bool unionNodes(vector<int>& parent, int u, int v) {
        int pu = findParent(parent, u);
        int pv = findParent(parent, v);
        if (pu == pv) return false; // They are already connected (cycle)

        parent[pu] = pv;

        return true;
    }

    int kruskalMST(int n) {
        vector<int> parent(n);
        for (int i = 0; i < n; ++i) parent[i] = i;

        int result = 0, edgesUsed = 0;
        while (!pq.empty() && edgesUsed < n - 1) {
            auto edge = pq.top(); pq.pop();
            int u = edge[0], v = edge[1], weight = edge[2];
            if (unionNodes(parent, u, v)) {
                result += weight;
                edgesUsed++;
            }
        }
        return result;
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                pq.push({i, j, calcDistance(points[i], points[j])});
            }
        }
        return kruskalMST(n);
    }
};
