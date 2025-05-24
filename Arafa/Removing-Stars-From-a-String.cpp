class Solution {
public:
    string removeStars(string s) {
        string result = "";
        for(const auto& letter : s) {
            if(letter == '*') {
                result.pop_back();
            }
            else {
                result += letter;
            }
        }

        return result;
    }
};