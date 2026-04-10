1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        vector<vector<string>> res;
5
6        map<string, vector<string>> myMap;
7        for(auto& str : strs) {
8            string temp = str;
9            sort(str.begin(), str.end());
10            myMap[str].push_back(temp);
11        }
12
13        for(const auto& pair : myMap) {
14            res.push_back(pair.second);
15        }
16
17        return res;
18    }
19};