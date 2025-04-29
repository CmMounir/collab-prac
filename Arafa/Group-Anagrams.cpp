class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> myMap;

    for(int i = 0; i < strs.size(); i++) {
       string temp = strs[i];
       std::sort(temp.begin(), temp.end()); 
       auto x =myMap[temp];
       x.push_back(strs[i]);
       myMap[temp] = x;
    }

    vector<vector<string>> result;
    for(const auto& element : myMap) {
       result.push_back(element.second); 
    }

    return result;
    }
};