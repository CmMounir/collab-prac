class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> myStack;
        for(const auto& log : logs) {
            if(log == "../") {
                if(myStack.size() != 0) myStack.pop();                
            }
            else if(log == "./") {
            
            }
            else{
                myStack.push(log);
            } 
        }
        return myStack.size();
    }
};