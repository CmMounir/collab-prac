class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        map<int, vector<int>>myMap;
        vector<bool> visited(n, false);
        for(const auto& element : edges) {
            myMap[element[0]].push_back(element[1]);
            visited[element[1]] = true;
        }

        int counter = 0;
        int result = 0;
        for(int i = 0; i<n; i++) {
            if(!visited[i]) {
                counter++;
                result = i;
            }

            if(counter > 1) break;
        }

        if(counter > 1) return -1;
        else return result;
    }
};