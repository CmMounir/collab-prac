class Solution {
public:
    int primMST(vector<vector<pair<int, int>>>& graph, int V) {
        vector<bool> inMST(V, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // (weight, vertex)

        pq.push({0, 0}); // Start from node 0
        int mst_weight = 0;

        while (!pq.empty()) {
            auto [weight, u] = pq.top(); pq.pop();

            if (inMST[u]) continue;
            inMST[u] = true;
            mst_weight += weight;

            for (auto [v, w] : graph[u]) {
                if (!inMST[v])
                    pq.push({w, v});
            }
        }

        return mst_weight;
    }

    int calcDistance(vector<int> p1 , vector<int> p2) {
        return abs(p1[0]-p2[0])+abs(p1[1]-p2[1]);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<vector<pair<int, int>>> graph(points.size());

        for(int i = 0; i < points.size(); i++) {
            for(int j = 0; j < points.size(); j++) {
                if(i == j) continue;
                graph[i].push_back({j, calcDistance(points[i], points[j])});
            }
        } 

        return primMST(graph, points.size());
    }   
};