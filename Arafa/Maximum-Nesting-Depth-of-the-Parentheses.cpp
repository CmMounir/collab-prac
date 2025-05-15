class Solution {
public:
    int maxDepth(string s) {
        int counter = 0;
        int result = 0;
        stack<char> myStack;
        for(const auto& character: s) {
            if(character == '(') {
                myStack.push(character);
                counter++;
                if(counter > result) result = counter;
            }
            else if(character == ')') {
                myStack.pop();
                counter--;
            }
            else {

            }
        }

        return result;
    }
};