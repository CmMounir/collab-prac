class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> myMap;

        for(const auto& element : edges) {
           if(myMap[element[0]] > 0) return  element[0];
           if(myMap[element[1]] > 0) return  element[1];

           myMap[element[0]]++;
           myMap[element[1]]++;
        }

        return 0;
    }
};