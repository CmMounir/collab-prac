class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        stack<int> myStack;
        for(const auto& element: tokens) {
            if(element == \+\) {
                int num1 = myStack.top();
                myStack.pop();
                int num2 = myStack.top()+num1;
                myStack.pop();
                myStack.push(num2);
            }
            else if(element == \-\) {
                int num1 = myStack.top();
                myStack.pop();
                int num2 = myStack.top()-num1;
                myStack.pop();
                myStack.push(num2);
            }
            else if(element == \*\) {
                int num1 = myStack.top();
                myStack.pop();
                int num2 = myStack.top()*num1;
                myStack.pop();
                myStack.push(num2);
            }
            else if(element == \/\) {
                int num1 = myStack.top();
                myStack.pop();
                int num2 = myStack.top()/num1;
                myStack.pop();
                myStack.push(num2);
            }
            else {
                myStack.push(stoi(element));
            }
        }
        result = myStack.top();
        return result;
    }
};