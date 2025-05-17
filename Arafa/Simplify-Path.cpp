class Solution {
public:
    vector<string> split(string path) {
        vector<string> result;
        string name = "/";
        char previous = 'A';
        for(const auto& character : path) {
            if(character == '/') {
                if(previous != '/') {
                    result.push_back(name);
                    name = "";
                }   
            }
            else {
                name += character;
            }
            previous = character;
        }
        if(name != "")
            result.push_back(name);
        return result;
    }

    string simplifyPath(string path) {
        string result = "";
        stack<string> myStack;
        vector<string> directories = split(path);

        for(const auto& element: directories) {
            if(myStack.empty()) {
                if(element != ".." && element != "." )
                    myStack.push(element);
            }
            else {
                if(element == "..") {
                   myStack.pop(); 
                }
                else if(element == ".") {
                    
                }
                else {
                    myStack.push(element);
                }
            }
        }

        while(!myStack.empty()) {
            if(myStack.top() != "/")
                result = "/" + myStack.top()  +result;
            myStack.pop();
        }  
        
        return result == "" ? "/" : result;
    }
};