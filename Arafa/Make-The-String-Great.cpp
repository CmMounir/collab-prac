class Solution {
public:
    bool isSameLetterDifferentCase(char a, char b) {
        return std::tolower(a) == std::tolower(b) && a != b;
    }
    string makeGood(string s) {
        stack<char> myStack;
        string result = "";
        for(const auto& letter : s) {
            if(myStack.empty()) {
                myStack.push(letter);
            }
            else {
                char ch = myStack.top();
                if(isSameLetterDifferentCase(ch, letter)) {
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