class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_stack;
        stack<char> t_stack;
        for(const auto& character : s) {
            if(character == '#' && !s_stack.empty()) 
                    s_stack.pop();
            else if(character != '#')
                s_stack.push(character);
        }
        for(const auto& character : t) {
            if(character == '#' && !t_stack.empty()) 
                t_stack.pop();
            else if(character != '#')
                t_stack.push(character);     
        }
        if(s_stack.size() != t_stack.size()) 
            return false;

        while(!s_stack.empty()) {
            if(s_stack.top() != t_stack.top()) 
                return false;
            s_stack.pop();
            t_stack.pop();
        }

        return true;
    }
};