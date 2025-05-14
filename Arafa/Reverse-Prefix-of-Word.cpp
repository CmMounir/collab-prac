class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> myStack;
        string result = "";
        bool flag = false;
        for(const auto& character : word) {
            if(flag) 
                result += character;
            else if(myStack.empty() && character != ch)
                myStack.push(character);
            else if(character == ch && flag == false) {
                result += character;
                while(!myStack.empty()) {
                   result += myStack.top();
                   myStack.pop(); 
                }
                flag = true;
            }
            else
                myStack.push(character);
        }

        return (flag == false) ? word : result;
    }
};