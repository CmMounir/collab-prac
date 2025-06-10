class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        map<int, vector<int>> myMap;
        vector<bool> visited(n,0);
        
        for(const auto& element: edges) {
            myMap[element[0]].push_back(element[1]);
            myMap[element[1]].push_back(element[0]);
            visited[element[0]] = true;
            visited[element[1]] = true;
        }

        map<vector<int>, int> xxx;
        for(auto& vec : myMap) {
            vector<int> value= vec.second;
            value.push_back(vec.first);

            sort(value.begin(), value.end());

            xxx[value]++;
        }

        int result = 0;
        for(const auto& element: visited) {
            if(!element) result++;
        }
        for(const auto& pair : xxx) {
            if(pair.first.size() == pair.second)
                result++;
        }

        return result;
    }
};