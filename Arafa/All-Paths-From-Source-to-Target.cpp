class Solution {
public:
    vector<vector<int>> answer;
    map<int, vector<int>> myMap;

    void solve(int src, int curr, vector<int>& list) {
        if(curr == myMap.size() - 1) {
            answer.push_back(list);
        }

        for(const auto& element : myMap[curr]) {
            list.push_back(element);
            solve(src, element, list);
            list.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int counter = 0;

        for(const auto& elemenet: graph) {
            myMap[counter++] = elemenet;
        }

        vector<int> list;
        list.push_back(0);
        solve(0, 0, list);

        return answer;
    }
};