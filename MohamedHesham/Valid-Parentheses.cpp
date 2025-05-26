class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        std::unordered_map<char, char> matching = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{') {
                stk.push(ch);
            } else {
                if (stk.empty() || stk.top() != matching[ch]) {
                    return false;
                }
                stk.pop();
            }
        }

        return stk.empty();
    }
};