class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> myStack;
        for(const auto& element : s) {
            if(myStack.empty()) {
                myStack.push(element);
            }
            else {
                if(element == myStack.top()) {
                    myStack.pop();
                }
                else {
                    myStack.push(element);
                }
            }
        }
        string result = "";
        while(!myStack.empty()) {
            result = myStack.top() + result;
            myStack.pop();
        }
        return result;
    }
};