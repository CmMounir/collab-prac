class Solution {
public:
    string clearDigits(string s) {
        stack<char> myStack;
        string result = "";
        for(const auto& letter : s) {
            if(myStack.empty()) {
                myStack.push(letter);
            }
            else {
                char ch = myStack.top(); 
                if(isdigit(letter)) {
                    myStack.pop();
                }
                else {
                    myStack.push(letter);
                }
            }
        }
        while(!myStack.empty()) {
            result = myStack.top()+result;
            myStack.pop();
        }
        return result;
    }
};