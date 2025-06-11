class Solution {
public:
    map<int, vector<pair<int, int>>> myMap;

    void dfs(int src, int curr, int threshold, vector<int>& dist) {
        for (auto& [neighbor, weight] : myMap[curr]) {
            int value = dist[curr] + weight;
            if (value < dist[neighbor] && value <= threshold) {
                dist[neighbor] = value;
                dfs(src, neighbor, threshold, dist);
            }
        }
    }

    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        for (const auto& edge : edges) {
            myMap[edge[0]].emplace_back(edge[1], edge[2]);
            myMap[edge[1]].emplace_back(edge[0], edge[2]);
        }

        int minReachable = INT_MAX;
        int resultCity = -1;

        for (int i = 0; i < n; ++i) {
            vector<int> dist(n, INT_MAX);
            dist[i] = 0;
            dfs(i, i, distanceThreshold, dist);

            int reachable = 0;
            for (int j = 0; j < n; ++j) {
                if (i != j && dist[j] <= distanceThreshold) {
                    ++reachable;
                }
            }

            if (reachable <= minReachable) {
                minReachable = reachable;
                resultCity = i;
            }
        }

        return resultCity;
    }
};
