class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map_res;

    for (const auto & i : strs) {

        std::string sorted = i;
        sort(sorted.begin(), sorted.end());

        map_res[sorted].push_back(i);
    }

    vector<vector<string>> result;

    for (const auto& entry : map_res) {

        result.push_back(entry.second);
    }

    return result;
}
};