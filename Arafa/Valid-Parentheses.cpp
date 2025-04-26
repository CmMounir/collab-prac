class Solution {
public:
    bool isValid(string s) {
        if(s.length() %2 == 1) {
            return false;
        }

        stack<char> myStack;
        for(int i =0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                myStack.push(s[i]);
            }
            else {
                if( myStack.size() != 0 &&
                    (
                    ( myStack.top() == '(' && s[i] == ')' ) || 
                    ( myStack.top() == '[' && s[i] == ']' ) || 
                    ( myStack.top() == '{' && s[i] == '}' )
                    ) 
                ) {
                    myStack.pop();
                }
                else {
                    return false;
                }
            }

        }
        if(myStack.size() == 0)
            return true;
        else 
            return false;
    }
};