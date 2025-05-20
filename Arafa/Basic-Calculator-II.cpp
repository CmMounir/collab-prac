class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        char op = '+';  // Initialize with '+' to handle the first number.
        int num = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            char c = s[i];

            if (isdigit(c)) {
                num = num * 10 + (c - '0');  // Build the current number.
            }

            // If the character is an operator or we're at the end of the string.
            if ((!isdigit(c) && !isspace(c)) || i == n - 1) {
                if (op == '+') {
                    st.push(num);
                } else if (op == '-') {
                    st.push(-num);
                } else if (op == '*') {
                    int tmp = st.top(); st.pop();
                    st.push(tmp * num);
                } else if (op == '/') {
                    int tmp = st.top(); st.pop();
                    st.push(tmp / num);
                }
                op = c;  // Update the operator.
                num = 0; // Reset the number.
            }
        }

        // Sum up all the numbers in the stack.
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};
