class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for(const auto& character:s) {
            myStack.push(character);
            if(myStack.size() > 2) {
                char third = myStack.top();  myStack.pop();
                char second = myStack.top(); myStack.pop();
                char first = myStack.top();  myStack.pop();
                if(third != 'c' || second != 'b' || first != 'a') {
                    myStack.push(first);
                    myStack.push(second);
                    myStack.push(third);
                }
            }
        }
        return myStack.empty();
    }
};