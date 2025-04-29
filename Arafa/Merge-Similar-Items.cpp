class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> result;

        map<int,int> myMap;
        for(const auto& element : items1) {
            myMap[element[0]] += element[1];
        }
        for(const auto& element : items2) {
            myMap[element[0]] += element[1];
        }

        for(const auto& pair : myMap) {
            vector<int> temp;
            temp.push_back(pair.first);
            temp.push_back(pair.second);
            result.push_back(temp);
        }

        return result;
    }
};