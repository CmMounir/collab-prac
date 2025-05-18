class Solution {
public:
    stack<char> myStack;
    
    string decodeString(string s) {
        for(const auto& character : s) {
            if(isdigit(character) || character == '[') {
                myStack.push(character);
            }
            else if(character == ']') {
                string helper = \\;
                while(myStack.top() != '[') {
                    helper = myStack.top()+helper;
                    myStack.pop();
                }
                myStack.pop();
                
                string num = \\;
                while(!myStack.empty() && isdigit(myStack.top())) {
                    num = myStack.top()+num;
                    myStack.pop();
                }
                int times = stoi(num);
                
                for(int i = 0; i < times; i++) {
                    for(const auto& l : helper) {
                        myStack.push(l);
                    }
                }
            }
            else {
                myStack.push(character);
            }
        }
        string result = \\;
        while(!myStack.empty()) {
            result = myStack.top() + result;
            myStack.pop();
        }
        return result;
    }
};