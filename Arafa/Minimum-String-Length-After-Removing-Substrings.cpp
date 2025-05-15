class Solution {
public:
    int minLength(string s) {
        stack<char> myStack;
        for(const auto& character : s) {
            if(myStack.empty()) {
                myStack.push(character);
            }
            else {
                char ch = myStack.top();
                if(ch == 'A' && character == 'B') {
                    myStack.pop();
                }
                else if(ch == 'C' && character == 'D') {
                    myStack.pop();
                }
                else {
                    myStack.push(character);
                }
            }
        }
        return myStack.size();
    }
};