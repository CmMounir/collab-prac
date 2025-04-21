class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> mapping;
        for (const auto& i : s) {
            mapping[i]++;
        }

        for (const auto& i : t) {
            if (mapping.find(i) == mapping.end()) {
                return false;
            }

            if (mapping[i] > 0) {
                mapping[i]--;
                if (mapping[i] == 0) {
                    mapping.erase(i);
                }
            } 
        }
        return mapping.empty();
    }
};