class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int prev_value = 0;

        for (int i = s.length() - 1; i >= 0; --i) {
            int curr_value = roman[s[i]];
            if (curr_value < prev_value)
                total -= curr_value;
            else
                total += curr_value;
            prev_value = curr_value;
        }
        return total;
    }
};