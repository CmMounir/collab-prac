class Solution {
public:
bool isValid(string s) 
{
        std::stack<char> check_stack;
        for(int i=0;i<s.size();++i)
        {
            if(!check_stack.empty())
            {
                if(s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{')
                    check_stack.push(s.at(i));
                else if(s.at(i) == ')' && check_stack.top() == '(')
                    check_stack.pop();
                else if(s.at(i) == ']' && check_stack.top() == '[')
                    check_stack.pop();
                else if(s.at(i) == '}' && check_stack.top() == '{')
                    check_stack.pop();
                else
                    check_stack.push(s.at(i));
            }
            else
                check_stack.push(s.at(i));
        }
        if(check_stack.empty())
            return true;
        return false;
}
};