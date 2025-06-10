class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n, false);
        for(const auto& element : edges) {
            visited[element[1]] = true;
        }

        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(!visited[i]) result.push_back(i);
        }

        return result;
    }
};