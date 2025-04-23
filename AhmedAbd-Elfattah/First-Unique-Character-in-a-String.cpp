class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> frequencyMap(26, 0);
        for (char c : s) {
            frequencyMap.at(c - 'a')++;
        }

        for (int i = 0; i < s.size(); ++i) {
            if (frequencyMap[s.at(i) - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};