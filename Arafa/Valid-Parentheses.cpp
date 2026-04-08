1class Solution {
2public:
3    bool isValid(string s) {
4        if(s == "") return true;
5
6        stack<char> myStack;
7    
8        for(const auto& character : s) {
9            if(myStack.empty()) { // if stack is empty, add to it
10                myStack.push(character);
11            }
12            else { // check character with top of stack
13                char top = myStack.top();
14                if(character == ')' && top == '(')
15                    myStack.pop();
16                else if(character == '}' && top == '{')
17                    myStack.pop();
18                else if(character == ']' && top == '[')
19                    myStack.pop();
20                else 
21                    myStack.push(character);
22            }
23        }
24        
25        return myStack.empty();
26    }
27};