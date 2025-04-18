class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::string seen;
        int maxLen = 0;
        for (const auto &i : s){
            size_t firstPos = seen.find_first_of(i);

            if (firstPos != string::npos){
                // Exist
                maxLen = std::max(maxLen, static_cast<int>(seen.length()));
                seen.erase(0, firstPos+1);
            }
            seen += i;
        }
        return maxLen = std::max(maxLen, static_cast<int>(seen.size()));
    }
};
