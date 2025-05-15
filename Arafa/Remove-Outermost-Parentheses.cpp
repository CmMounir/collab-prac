class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> myStack;
        int counter = 0;
        for(const auto& character : s) {
            if(character == '(') {
                if(counter != 0)
                    myStack.push(character);
                counter++;
            }
            else if(character == ')') {
                if(counter != 1)
                    myStack.push(character);
                counter--;
            }
        }
        string result;
        while(!myStack.empty()) {
            result = myStack.top() + result;
            myStack.pop();
        }
        return result;
    }
};